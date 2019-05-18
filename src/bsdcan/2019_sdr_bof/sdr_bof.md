---
title: Amateur Radio and SDR
subtitle: 'BSDCan -- BOF'
date: 2019-05-17T16:00:00Z
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

- Software developer
- OpenBSD user since ~3.2
- First ham license, Novice in late 70s
   - 5 wpm CW (w00t!)
- Technician at DefCon22
- General Class 2 weeks later
- Working on Amateur Extra


# What is Amateur Radio?

- Radio service operated by amateurs, *i.e.* non-professional
    - Not for monetary gain
    - Typically a real person
    - Clubs can organize for amateurs to work together
- Amateur Radio Service
- Established by the [International Telecommunications
    Union](https://en.wikipedia.org/wiki/International_Telecommunication_Union)
- Regulated by international agreement
    - Regulations implemented through harmonizing of laws by national
        governments


# What is Amateur Radio?

- Three regions:
    - Region 1 (Europe, Middle East, CIS, Africa)
    - Region 2 (Americas)
    - Region 3 (South and East Asia, Pacific Ocean)
- Hobby
- License to experiment with radio:
    - Somewhat dependent on region and country
    - US, very open and mostly hands off due to internal "policing"
        by hams
    - Many innovations from amateur sphere


# When Did Amateur Radio Start?

- Officially, early 1900s
- However, amateurs have operated since the beginning


# Why "Ham"?

- Believed to have begun as pejorative because amateurs were "ham
  fisted" on their key (Morse Code)
- Adopted by amateurs as badge of honor


# Notable Accomplishments by Amateur Radio

- One of the oldest radio associations in the world, American Radio
    Relay League (ARRL)
    - Begun in 1914 by Hiram Percy Maxim
- Numerous satellite launches
- Led development of packet radio


# Notable Accomplishments by Amateur Radio

- Long-distance transmitting around the world using various
    - Skip propagation
    - Moonbounce (Earth-Moon-Earth EME)
    - Meteor scatter
- Development of Slow-Scan and Fast-Scan Television
    - Shortwave radio equipment to send television images using normal
        voice bandwidth
    - Amateur radio operators were online in many cities before
        commercial stations came on the air


# Notable Accomplishments by Amateur Radio

- Local, regional, national and international relay networks
- Quick mobilization during disaster
    - Supplementing and often replacing local phone systems (wired and
        wireless)
    - Work to send gear and people around the world during major
        disasters

# Privileges -- What Can a (US) Ham Do?

- Transmit in numerous bands
    - Depends on license class
- Transmit using various modes of communication
    - Voice
    - Image
    - Text and Data
        - Continuous Wave (CW) -- Morse Code
        - Packet Radio
        - Phase-Shift Keying
        - Spread Spectrum
        - Digital


# Privileges -- What Can a (US) Ham Do?

- Operate stations in other countries
    - If reciprocal licensing in place
    - Limited by country laws, not US
- Build and use unlicensed equipment
    - Within regulation
    - It's the operator who's licensed in amateur, not the
        equipment!!!
- Help license other hams!
    - Volunteer Examiner
- Help enforce FCC regulations and volunteer band plans


# Getting a US License

- 3 License classes in US:
    - Technician
    - General
    - Amateur Extra
- License good for 10 years
    - Renewal fee, no additional testing


# Getting a US License - Technician

- 35-multiple-guess-question exam
- No Morse code required
- Voice privileges
- Various modes allowed
- Limited in high-frequency bands


# Getting a US License - General

- 35-multiple-guess-question exam
- All privileges of Technician
- Access to 83% of all amateur HF bands


# Getting a US License - Amateur Extra

- 50-multiple-guess-question exam
- All privileges allowed to amateurs


# Getting a License in Other Countries

- [Audience participation]
- Canada ([RAC - Radio Amateurs of/du Canada](http://wp.rac.ca/))
- France
- Germany
- UK
- Other


# Getting Started

- Shoot for Technician class license first
    - Learn some basic electronics
    - Learn how to use Ohm's Law
    - Memorize some band-plan information
- Get a study guide
    - ARRL books very good helpful
    - Numerous online resources
    - <http://hamexam.org>


# Once You Pass

- Get an inexpensive radio
    - No easier way to lose interest than to not have a radio
    - BaoFeng handy talkies are cheap (~$35.00 on Amazon)
- Look for a club
- Join ARRL
    - QST Magazine has tons of info and articles


# Hardware -- What Do I Need?

- Technically, nothing...but that's no fun
- A receiver, better than nothing, but still no fun
- A transceiver...ahh
    - A handy talkie like the BaoFeng
    - A mobile rig -- not (!!!!) a CB
    - A portable rig
    - A beast


# Hardware -- What Do I Need?

- Handy Talkies
    - Battery powered
    - Typically 1 to 3 bands (70 cm, 2 m, 6 m)
    - 1 to 5 watts
    - 100 or so memories
    - DTMF keypad
    - "Rubber-ducky" antenna


# Hardware -- What Do I Need?

- Mobile and portable
    - Dual band to all band
    - Voice modes to all mode
    - Microphone
    - Serial or other computer interface
    - 13.8 VDC, sometimes internal batteries
    - Antenna connected by feed line
    - Perhaps an antenna tuner
        - Internal or add-on


# Hardware -- What Do I Need?

- Beast
    - Require AC or perhaps converter
    - Usually all band, not always
        - Some purpose-built rigs, especially DXing
    - Serial or other computer interface
    - Antenna connected by feed line
    - Often an antenna tuner
        - Internal or add-on


# Hardware Other

- Antenna
- Antenna tuner
- Computer
- Sky's the limit


# What is SDR?

- Software-Defined Radio
- Replaces purpose-specific circuits with general purpose computing
    and software algorithms


# SDR - What Do I Need?

- Get an RTL SDR
    - About $20.00
- Get a HackRF, BladeRF or AirSpy
    - (US)$150 - (US)$650
- Get the software
    - rtl-sdr
    - fldigi
    - gqrx
    - GNU Radio


# State of SDR on BSD: OpenBSD

- fldigi
- rtl-sdr
- GnuRadio


# State of SDR on BSD: FreeBSD

- [Audience participation]


# Conclusion


- Questions - You have them, I may have answers


# Support OpenBSD

- <http://www.openbsdfoundation.org/>


# Contact Details

- Aaron Poffenberger
- akp@hypernote.com
- Blog: <http://akpoff.com>
- Twitter: @akpoff
- bsd.network: @akpoff
- Amateur Radio: KG5DQJ


# Ham Radio Clubs - US

- [FCC](http://wireless.fcc.gov/services/amateur/)
- [ARRL](http://www.arrl.org)
- [ARRL Club Finder](http://www.arrl.org/find-a-club)


# Ham License Info - US

- [Gordon West](http://www.gordonwestradioschool.com/)
- [HamExam](http://hamexam.org)
- [QST](http://qst.com)


# Ham Radio Clubs and License Info - Canada

- [RAC - Radio Amateurs of/du Canada](http://wp.rac.ca/)
- [Government of/du Canada](http://www.ic.gc.ca/eic/site/025.nsf/eng/home)
- [Canada Ham FAQ](http://www.ic.gc.ca/eic/site/025.nsf/eng/h_00006.html)


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
