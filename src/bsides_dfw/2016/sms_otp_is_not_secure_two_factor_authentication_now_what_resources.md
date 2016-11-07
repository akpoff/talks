---
title: SMS OTP is not Secure Two Factor Authentication! Now what?
subtitle: Resources
author: Aaron Poffenberger
date: BSidesDFW \newline\newline 2016-11-05
---

Resources
=========

- Very select and incomplete list of resources
- Google is your friend
- InfoSec people are your friends

Short Message Service Specification
===================================

- [Specification](https://portal.3gpp.org/desktopmodules/Specifications/SpecificationDetails.aspx?specificationId=747)
- [A5/1 Stream Cipher (54-bit)](https://en.wikipedia.org/wiki/A5/1)
- [A5/2 Stream Cipher (the weaker version of A5/2)](https://en.wikipedia.org/wiki/A5/2)
- [A5/3 "Kasumi" block cipher (better but not great)](https://en.wikipedia.org/wiki/KASUMI)

Intercepting SMS Messages
=========================

- [Lawful intercept](http://genius.it/motherboard.vice.com/de/read/exklusiv-wie-das-bka-telegram-accounts-von-terrorverdaechtigen-knackt)
    - [Thomas Rid's Summary Tweet](https://twitter.com/RidT/status/769234433895522308)
- [Hacking WhatsApp using SS7 - Live Demo](https://www.youtube.com/watch?v=qPPWQbGTptQ)
	- [Guardian article explaining SS7 hack](https://www.theguardian.com/technology/2016/apr/19/ss7-hack-explained-mobile-phone-vulnerability-snooping-texts-calls)
    - [Explaination of the live demo the SS7 hack](http://blog.drhack.net/whatsapp-telegram-hacking-demo-live-ss7-vulnerability/)
- [Rogue Cellular Infrastructure Disguised as Office Printer](https://julianoliver.com/output/stealth-cell-tower)
- [New Attack Allows Intercepting or Blocking of Every LTE Phone Call And Text](http://www.theregister.co.uk/2016/10/23/every_lte_call_text_can_be_intercepted_blacked_out_hacker_finds/)
  - [Slides from Ruxcon presentation](http://www.slideshare.net/slideshow/embed_code/key/Ez63bGDQrP6EPY)

Social Engineering and Identity Theft
=====================================

- [Your mobile phone account could be hijacked by an identity thief](https://www.ftc.gov/news-events/blogs/techftc/2016/06/your-mobile-phone-account-could-be-hijacked-identity-thief)
- [Getting Hacked As An Internet Creator](https://medium.com/internet-creators-guild/getting-hacked-as-an-internet-creator-982d03637e86)
- [Adding a phone number to your Google account can make it LESS secure](https://tech.vijayp.ca/adding-a-phone-number-to-your-google-account-can-make-it-less-secure-f1cc7280ff6a)

RFCs and Standards
==================

- [Draft Special Publication 800-63-3: Digital Authentication Guideline](http://nstic.blogs.govdelivery.com/2016/05/08/announcing-draft-special-publication-800-63-3-digital-authentication-guideline/)
- [RFC 2104 - HMAC](https://tools.ietf.org/html/rfc2104)
- [RFC 4226 - HOTP](https://tools.ietf.org/html/rfc4226)
- [RFC 6238 - TOTP](https://tools.ietf.org/html/rfc6238)
- [Wikipedia Explanation of HMAC](https://en.wikipedia.org/wiki/Hash-based_message_authentication_code)
- [Wikipedia Explanation of HOTP](https://en.wikipedia.org/wiki/HMAC-based_One-time_Password_Algorithm)
- [Wikipedia Explanation of TOTP](https://en.wikipedia.org/wiki/Time-based_One-time_Password_Algorithm)

TOTP/HOTP Clients
=================

- [Authy](https://www.authy.com/)
- [Google Authenticator](https://github.com/google/google-authenticator)
- [oathgen - A command line HOTP and TOTP client](https://github.com/w8rbt/oathgen)
- [OATH Toolkit](http://www.nongnu.org/oath-toolkit/)

TOTP/HOTP Libraries
===================

- [C/C++ - Google Authenticator](https://github.com/google/google-authenticator)
- [C/C++ - OpenOTP](https://sourceforge.net/projects/rcdevs-openotp/)
- [C\# - OATH.NET](https://github.com/jennings/OATH.Net)
- [C\# - OTP](https://github.com/kappa7194/otp)
- [Haskell - One Time Password](https://hackage.haskell.org/package/one-time-password)
- [Java - libotp](https://github.com/kamranzafar/libotp)
- [Java - oath](https://github.com/johnnymongiat/oath)
- [Javascript - JS-OTP](https://github.com/jiangts/JS-OTP)

TOTP/HOTP Libraries (cont.)
===========================

- [Node.js - speakeasy](https://github.com/speakeasyjs/speakeasy)
- [Perl - Authen::OATH](http://search.cpan.org/dist/Authen-OATH/lib/Authen/OATH.pm)
- [Python - pyotp](https://github.com/pyotp/pyotp)
- [Python - oath](https://pypi.python.org/pypi/oath)
- [php - otphp](https://github.com/lelag/otphp)
- [php - Otis](https://github.com/eloquent/otis)
- [Ruby - rotp](https://github.com/mdp/rotp)
