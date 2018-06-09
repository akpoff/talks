---
title: Fighting Spam at the Frontline
subtitle: Using DNS, Log Files and Other Tools in the Fight Against Spam
date: 2016-11-06T19:55:00Z
author: Aaron Poffenberger
email: akp@hypernote.com
tags: email spam
---



Thanks
======

+ BSDCan

+ BSDCan Sponsors

+ BSDCan Volunteers



Introduction
==========

Aaron Poffenberger

+ Software developer 20+ years

+ OpenBSD user

+ Mail Server admin 20+ years



Origin of Talk
===========

+ 20+ years running mail servers

+ 20+ years receiving spam

+ Ineffectual client-side spam filtering

+ Ineffectual server-side spam filtering

+ Promise and pain of greylisting

+ pf(4)

+ SPF



The Goal
=======

Reduce spam:

+ Allow “legitimate” senders to connect

+ Prevent “illegitimate” senders from connecting

+ Impose little or no delay on legitimate senders

+ Minimal-resource usage

+ **Mostly** automatable



Definitions
========

Let's start with some definitions so we're on the same sheet of music.



What is Spam Email?
================

A common definition (with my additions):

> Unsolicited [commercial] email, typically of an advertising nature,
> that recipients cannot [easily] unsubcribe from, and is **typically**
> sent from non-canonical senders (compromised systems).



What is *Not* Spam Email?
=====================

For the purposes of (mostly) automated blocking at the MTA, the following are not spam:

+ Newsletters your users signed-up for in 1997 and never unsubscribed from

+ Opt-out marketing mail your users get when joining a website

+ Political diatribes from crazy uncle Joe

In short, email is not spam just because the recipient doesn't like it or finds it annoying.



X-Listing: White, Black and Grey
=========================

Blacklisting

:    block delivery from specific IPs

Greylisting

:    temporarily fail delivery from unknown IPs until some
    criteria met, then [temporarily] whitelist

Whitelisting

:    always allow delivery from specific IPs



In the Beginning was the Blacklist
==========================

+ Not really

    In the beginning we accepted email from anyone . . . and gladly
    forwarded on their behalf.

    That didn’t last long.

+ Rise of real-time blacklists (SpamHaus, et al.)

    Admins began blocking bad actors, then sharing the lists.

+ Problem: False positives

    > Q. How did my IP get on this list?
    >
    > A. You were reported for spamming.
    >
    > Q. How do I get off?
    >
    > A. Die spamming scumbag!



Let There Be Whitelists
=================

+ Blacklists inevitably beget whitelists

+ Great idea, in theory:

    > I’ll add the IPs of must-receive senders to my firewall
    > rules.

+ Problem: Not scaleable

    > What do you do when your "must-receive senders" change their
        IP address and you don’t notice?

    > How do you manage updates for dozens or hundreds of these
       "must-receive senders"?



Greylisting
========

+ Whitepaper by Evan Harris in 2003

+ Based on observation that spammers typically don’t retry failed
   delivery

+ Implemented in OpenBSD spamd(8) in 3.5

   Available in one form another for almost every MTA and platform

+ Problem:
    - Delayed delivery can be costly.

    - Some MTAs have (in the past) treated temporary failure as
       permanent.

    - Some large senders (ahem, Google) send from more than one
       IP address. Most do not use IP affinity. I.e., they don’t resend
       from the same IP address that recently failed.



What's Changed to Make X-listing Viable?
================================

+ Not much

+ Well, there is SPF

+ And spammers still spam from compromised IP addresses

+ And do a lot of other bad things from those same IP addresses

From these three facts we can begin blocking more spam at the MTA.



Sender Policy Framework (SPF)
========================

Publish DNS TXT records to specify authorized
outbound mailers by IP, IP Range, host, and/or
include SPF records of other domains


```
  $ dig example.com txt

  ;; ANSWER SECTION:
  example.com. 300 IN TXT "v=spf1 ip4:192.0.2.1 -all"
```



Why Does Specifying the Sending IPs or Hosts Matter?
======================================

+ SPF records are like MX records but for outbound mail

+ If I have a canonical record specifying which IPs or hosts will be
   sending email for a give domain, I can build a better whitelist

+ Fun fact:

    > Many domains don’t send from the same hosts that
    > receive email



Are there Tools to Walk SPF Records?
=============================

Yes, yes indeed.

+ `spf_fetch`

+ `spfwalk`

+ `smtpctl spf walk`



`spf_fetch`
=======

Collection of utilities to recursively look-up SPF records and manage
whitelists

+ Initial release during BSDCan 2016 as part of the
   “OpenSMTPD for the Real World Tutorial”.

Features:

+ `spf_fetch` to recursively look-up SPF records and resolve all entries to IP
   addresses (IPv4 and IPv6)

+ `spf_update_pf` to manage adding and removing IPs from pf tables

+ `spf_mta_capture` to watch log files for outbound sent mail,
   run spf_fetch on the domain, and add to whitelist

+ List of common domains (Google.com, Outlook.com, etc)



`smtpctl spf walk` and `spfwalk`
=======

+ Rewrite of spf_fetch in c in collaboration with Gilles Chehade.

   (Let’s be honest here, Gilles did most of the coding. Thanks, Gilles!)

+ Imported into spmtpctl(8) as `smtpctl spf walk`.

   (I maintain the standalone version.)

+ Same core features as `spf_fetch`



Example
=======

```
  $ echo google.com | smtpctl spf walk # spfwalk | spf_fetch

  172.217.0.0/19
  172.217.32.0/20
  172.217.128.0/19
  <snip>
  2800:3f0:4000::/36
  2a00:1450:4000::/36
  2c0f:fb50:4000::/36
```



How Do I Put All this Together to Prevent Spam
=============================

+ Build Whitelists
+ Build Blacklists
+ Implement firewall rules



Step 1: Whitelist Known Good Mailers
==========

+ Who are the known good mailers?

+ For our purposes, mailers who play by the rules:

    - It's a timey-wimey, I know one when I see one kind of thing

    - Mostly large, well-established players like Gmail, Microsoft,
       Fastmail, and yes, Yahoo

    - I currently have ~140 domains

+ And anyone we else we know we don't want to miss emails from

+ Whitelists from other sources:

    - bpg-spamd



Step 2: Watch for Outbound Mail and Add spfwalk'd Domains to Whitelist
======================

+ `spf_mta_capture` from my `spf_fetch` project is a good example script for
    monitoring `/var/log/maillog` for domains users send to

+ Domains that appear frequently could be added to the list of "Known Good Mailer"



Step 3: Blacklist Known Bad Actors
========================

There are numerous lists of known bad actors.

+ NixSpam

+ bgp-spamd

+ Find your favorite, but note, you probably don't have to pay for a list



Step 4: Log File Mining for Bad Actors
==========

Theory

:    spammers don't just spam from a given address. They also use compromised machines
     for other activity like finding ssh daemons that allow root logins, and for hunting for admin
     sites for common web apps.

+ Mine log files for IP addresses engaged in other bad behavior:

    - httpd logs
    - ssh logs
    - Other logs



httpd logs
========

Scan logs looking failed requests:

+ Broad-scope:

    - 403 and 404 errors

+ Narrow scope (examples):

    - phpMyAdmin

    - mysql-admin

    - wp-admin

    - tmUnblock.cgi (Cisco/Linksys routers)

Should anyone outside your firewall be requesting these urls?

(See script: `scan_logs_bruteforce`)


sshd logs
=======

+ Broad-scope:

    - Any failed login attempt (preferably 'not listed in AllowUsers')

+ Narrow-scope:

    - root

Again, should anyone outside your firewall be trying to login as root
via ssh?

(See script: `scan_logs_bruteforce`)



Step 5: Sharing X-Lists Among Servers (as Necessary)
========================

bgp-spamd is an excellent example of how to distribute lists among your own hosts.

You did go to Peter Hessler's bgp tutorial, right? If not, the basics are pretty easy to learn.



Step 6: Automate with **cron(8)**
==========================

+ Add scripts to crontab(1)



Step 7: Firewall Rules
===========

+ As noted, whitelists should always win

    Prevents missed email from our known-good list

+ Expire blacklisted IPs regularly:

    Be conservative about blacklisting. 24 hours is usually long enough, especially when mining from logs.
    You don't want to blacklist forever an IP that might move to another host later.



Isn't there a Risk of Blocking Legitimate Senders?
==========

Not really?

Are Google, Microsoft, FastMail, or Hypernote (my domain) likely to
connect to your sshd instance trying to login as root, or anyone for that
matter? Or will anyone from their sending IPs try to view /wp-admin on your
mail server?

Still, firewall rules should be configured to always allow whitelisted senders through.

Unless you really want to be hardcore. Then set blacklisting rules to always win. ;-)

(See config: `pf.conf`)



What If I Don't Run OpenBSD or Don't Use OpenSMTPD?
========================

+ Most of these techniques don't require OpenSMTPD, but some of the scripts
   may have to be tweaked to work with the mailer of your choice

+ 



Choosing an MTA
==============



Postscreen
========



Questions
========



Credits
======

+ Gilles Chehade (mention others) (OpenSMTPD)

+ Pitr Hansteen (pf, mail rants)

+ OpenBSD Team

+ BSDCan

+ Students in "OpenSMTPD for the Real World" tutorial



Links
====

+ https://en.wikipedia.org/wiki/Spamming

+ [Postscreen](http://www.postfix.org/POSTSCREEN_README.html)

+ [Greylisting](https://en.wikipedia.org/wiki/Greylisting)

+ [Greylisting Whitepaper](http://projects.puremagic.com/greylisting/whitepaper.html)

+ [spamd(8) in OpenBSD 3.5](https://www.openbsd.org/35.html)

+ [LMTP](https://tools.ietf.org/html/rfc2033)

+ [Gilles Chehade Blog Post Announcing `spfwalk`](https://poolp.org/posts/2018-01-08/spfwalk/)

+ [Standalone `spfwalk`](https://github.com/akpoff/spfwalk)

+ [`spf_fetch'](https://github.com/akpoff/spf_fetch)

+ [bgp-spamd](https://bgp-spamd.net/)



Mine Junk/Spam Folders
========================

Identify one or more users you trust to properly tag messages (i.e., move to Junk)
and mine the headers for IP addresses.

Danger, Will Robinson, Danger!

Less risky: Mine emails that are both in Junk *AND* marked 'Read'.

(See script: `remove_spam_senders`)



Outline
======

+ Thanks
+ Introduction
+ Origin of talk
+ Spam definition
+ Some of the tools and techniques we’ll look at:
    - MTA-specific features like postscreen
    - Using SPF records to whitelist well-known senders
    - Using the mail logs to whitelist outbound recipient domains
    - Integrating feedback from SpamAssassin
    - Using log files to identify bad actors
    - Effectiveness of third-party lists
+ Sharing lists via bgpd
+ Choosing an MTA
+ Questions
+ Credits
+ Links
