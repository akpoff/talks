---
title: Amateur Radio and SDR
subtitle: 'BSDCan -- BOF'
date: 2020-06-06T12:15:00Z
author: Aaron Poffenberger
email: akp@hypernote.com
institute: akp@hypernote.com
tags: security
classoption:
- bigger
- presentation
---


# Introduction

Aaron Poffenberger

- OpenBSD user since ~3.2

- US Novice in late 70s (5 wpm CW - w00t!)

- US Technician Class and General Class - August 2014


# Introduction

Iain R. Learmonth

- HamBSD Founder

- UK Foundation License - March 2011

- UK Intermediate License - December 2014

- UK Full License - October 2016


# What is Amateur Radio?

- Radio service operated by amateurs, *i.e.* non-professional:
   - Not for monetary gain
   - Typically a real person
   - Clubs can organize for amateurs to work together

- Hobby

- License to experiment with radio


# What is Amateur Radio?

- Regulated by international agreement:

   - Established by the [International Telecommunications Union]

   - Regulations implemented through harmonizing of laws by national
     governments

- Three regions:

   - Region 1 (Europe, Middle East, CIS, Africa)

   - Region 2 (Americas)

   - Region 3 (South and East Asia, Pacific Ocean)

[International Telecommunications Union]: https://en.wikipedia.org/wiki/International_Telecommunication_Union


# When Did Amateur Radio Start?

- Officially, early 1900s

- However, amateurs have operated since the beginning

- "Ham" believed to have begun as pejorative because amateurs were
  "ham fisted" on their key (Morse Code)

- Adopted by amateurs as badge of honor


# Notable Accomplishments by Amateur Radio

- Local, regional, national and global relay networks

- Long-distance contact around the world:

   - Skip propagation
   - Meteor scatter
   - Moonbounce (Earth-Moon-Earth EME)

- Developed Slow-Scan and Fast-Scan Television

- Led development of packet radio

- Numerous satellite launches

- Quick mobilization during disaster:
   - Supplementing or replacing local phone systems
   - Sending gear and people to disaster areas


# Privileges

- Transmit in numerous bands (by license class)

- Transmission modes:
   - Voice
   - Image
   - Text and Data:
     - Continuous Wave (CW) -- Morse Code
     - Phase-Shift Keying
     - Spread Spectrum
     - Digital
     - Packet Radio

- Operate in other countries (with reciprocal agreement)


# Privileges

- Build and use unlicensed equipment (within regs):

   - Remember: It's the operator who's licensed in amateur radio,
     not the equipment!!!

- Help license other hams!

   - Volunteer Examiner

- Help enforce regulations and volunteer band plans


# License Classes and Expiry

- 3 US License classes:

   - Technician, General, and Amateur Extra Class
   - Valid 10 years, update mailing address


- 3 UK Licenses:

  - Foundation, Intermediate, and Full License
  - Valid for life, revalidate every 5 years
  - Update mailing address


- 2 CA Licenses + 1 Endorsement(?):

  - Basic, and Advanced Qualification, Morse Code
  - Valid for life, update mailing address

- Check your national regulations


# "Basic" License (CA, UK, US)

Requirements:

- Written exam (multiple guess)

- Basic electronics and regulatory details

- No Morse code test (CA has a Morse-code option)


Privileges:

- Voice privileges

- Various modes allowed

- Limited in high-frequency bands


# "Advanced" Licenses (UK, US)

Requirements:

- Written exam (multiple guess)

- More electronics and regulatory details

- No Morse code test (CA has a Morse-code option)


Privileges:

- All privileges of "basic" license

- Access to more amateur bands


# "Full" License (CA, UK, US)

Requirements:

- Written exam (multiple guess)

- Highest-level of electronics knowledge and regulatory details

- No Morse code test (CA has a Morse-code option)


Privileges:

- All privileges allowed to amateurs


# Once You Pass

- Get an inexpensive radio:

   - No easier way to lose interest than to not have a radio

   - BaoFeng handy talkies are cheap (~$35.00 on Amazon)

- Join a local club

- Join national radio society


# What Hardware Do I Need?

- Receiver: Not much fun

- Transceiver:

   - Handy talkie like the BaoFeng (\$$ - \$\$$)

   - Mobile rig (\$\$$)

   - Portable rig (\$\$\$ - \$\$\$$)

   - Bench rig (\$\$\$$ - \$\$\$\$$)

- Used equipment can shave 25% - 50% off those prices


# What Hardware Do I Need?

Start small and inexpensive with a handy talkie to:

   - Battery powered

   - 1 to 3 bands (70 cm, 2 m, 6 m)

   - 1 to 5 watts

   - 100 or so memories

   - DTMF keypad

   - "Rubber-ducky" antenna

   - Some have GPS and APRS built-in

     - with varying degrees of usefulness


# Hardware -- What Do I Need?

Mobile or portable:

   - Mobile rigs can mount in a car, but have small screens

   - Heavier, more interface controls, and larger screens

   - Dual band to all band

   - Voice modes to all mode

   - Serial or other computer interfaces

   - Antenna connected by feed line

   - Perhaps an antenna tuner

   - Some have GPS and APRS built-in


# Hardware -- What Do I Need?

Bench Rig:

   - Require AC or perhaps converter

   - Usually all band, not always

     - Some purpose-built rigs, especially DXing

   - Serial or other computer interfaces

   - Antenna connected by feed line

   - Often an antenna tuner

   - Might be an SDR, especially as price goes up


# Hardware Other

- Antenna

- Antenna tuner

- Computer

- Sky's the limit


# What is HamBSD?

~~~

The HamBSD project aims to bring amateur packet
radio to OpenBSD, including support for TCP/IP
over AX.25 and APRS tracking/digipeating in the
base system.

~~~


# What is APRS?

- Automatic Packet Reporting System

- Developed since the late 1980s by Bob Bruninga, WB4APR

- Amateur radio-based system for real time digital communications of
  information of immediate value in the local area. Data can include:

  - Global Positioning System (GPS) coordinates
  - Weather station telemetry
  - Text messages
  - Announcements
  - Queries
  - Other telemetry


# What Do I Need to Use APRS?

- Radio

- GPS (built-in or external)

- TNC (built-in or external)

- Software


# What is HamBSD?

Goals:

- KISS TNC support
- AX.25 networking support
- APRS application support
- APRS-IS compatibility


# What Does HamBSD Provide?

AX.25 NETWORKING

Amateur packet networking support in HamBSD is provided by a number of
kernel drivers, userspace applications and library functions.

Kernel Drivers:

- axtap(4) - AX.25 network tunnel interface
- kiss(4) - AX.25 network interface using a KISS TNC

Userspace Applications:

- rkissd(8) - Remote KISS daemon

Library Functions:

- ax25_aton(3) - convert AX.25 address representation


# What Does HamBSD Provide?

AUTOMATIC PACKET REPORTING SYSTEM

Tools are provided for building APRS infrastructure on top of the
AX.25 networking support.

Userspace Applications:

- aprsd(8) - APRS tracker and digipeater
- aprsisd(8) - APRS-IS client daemon


# Using HamBSD?

- Can I run it today?

- Will the software compile and run on my OpenBSD?


# HamPKI: A root CA bundle for amateur radio

~~~

HamPKI ... [provides] a framework for authenticating
radio amateurs using packet radio systems.

~~~

- ARRL Logbook of the World

- APRS Tier 2 servers

- *Your Club Here*


# Securing Amateur Packet Radio with IPSec

Draft RFC Specification:

- Obsoletes <https://tools.ietf.org/html/rfc1226>  
  (Internet Protocol Encapsulation of AX.25 Frames)


Summary Overview:

- Internet Protocol Encapsulation

- Quality of Service

  - Priority Frames

  - Automatic Packet Reporting System

- Security Considerations


# Security Considerations in Detail

- Work in Progress(!)

- IPSec

- ESP

- NULL Algorithm

- Replay Protection


# More Details

- <https://hambsd.org/>

- <https://hambsd.org/pki.html>

- <https://tools.ietf.org/html/draft-learmonth-intarea-rfc1226-bis-01>


# Conclusion

- Questions - You have them, we may have answers


# Support OpenBSD and HamBSD

- <http://www.openbsdfoundation.org/>

- <https://hambsd.org/> (See links)


# Contact Details

Aaron Poffenberger

- akp@hypernote.com
- Blog: <http://akpoff.com>
- Twitter: @akpoff
- bsd.network: @akpoff
- Amateur Radio: KG5DQJ

Iain R. Learmonth

- HamBSD: <https://hambsd.org/>
- Twitter: @hambsdorg
- bsd.network: @irl
- Amateur Radio: MM0ROR
- IRC: <ircs://chat.freenode.net/hambsd>


# Ham Radio Resources

US:

- [ARRL](http://www.arrl.org)
- [ARRL Club Finder](http://www.arrl.org/find-a-club)
- [FCC](http://wireless.fcc.gov/services/amateur/)
- [HamExam](http://hamexam.org)
- [QST](http://qst.com)


Canada:

- [RAC - Radio Amateurs of/du Canada]
- [Government of/du Canada](http://www.ic.gc.ca/eic/site/025.nsf/eng/home)
- [Canada Ham FAQ](http://www.ic.gc.ca/eic/site/025.nsf/eng/h_00006.html)


UK:

- [Radio Society of Great Britain](https://rsgb.org/)


# Radio Gear

- BaoFeng
- Icom
- Kenwood
- Motorola
- Yaesu


# SDR People and Resources

- rtl-sdr: <http://www.rtl-sdr.com/>
- HackRF and YardStick: <https://greatscottgadgets.com/>
- BladeRF: <http://nuand.com/>
- AirSpy: <http://airspy.us/>
