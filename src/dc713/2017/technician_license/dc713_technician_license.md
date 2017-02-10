----
Title:  DC 713 Technician License Exam Prep
Author: Aaron Poffenberger, KG5DQJ
Date: 2017-02-09 19:00
----


Overview
========

- Introduction

- About You

- What is Amateur Radio?

- Notable Accomplishments by Amateur Radio

- Privileges -- What Can a Ham Do?

- License Requirements

- Technician License

- Hardware -- What Do I Need?

- SDR

- Conclusion

- Resources


Introduction
============

- Software developer
    - ~20 years professionally
    - Security software developer
    - Design and implement secure APIs

- InfoSec
    - Software vulnerability assessment
    - Auditing
    - CISSP 2005+
	- US Army

- IT Background
	- IT Admin
    - ISP (dial-up land)
    - DevOps


Introduction
============

- Amateur Radio
    - First ham license, Novice in late 70s
        - 5 wpm CW (w00t!)
    - Technician at DefCon22
    - General Class 2 weeks later
    - Working on Amateur Extra

- Founding member, Houston dc713

- Founding member, Houston Area Hackers Anonymous

- OpenBSD user

- Electronics hobbyist


About You
=========

- Who has their Technician Class License?


About You
=========

- Who has their Technician Class License?

- Who has their General Class License?


About You
=========

- Who has their Technician Class License?

- Who has their General Class License?

- Who has the Amateur Extra Class License?


What is Amateur Radio?
======================

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
- Three regions:
    - Region 1 (Europe, Middle East, CIS, Africa)
    - Region 2 (Americas)
    - Region 3 (South and East Asia, Pacific Ocean)
- Hobby


What is Amateur Radio?
======================

- License to experiment with radio:
    - Somewhat dependent on region and country
    - US, very open and mostly hands off due to internal "policing" by
      hams
    - Many innovations from amateur sphere


When Did Amateur Radio Start?
============================

- Officially, early 1900s
- However, amateurs have operated since the beginning of radio


Why "Ham"?
==========

- Believed to have begun as pejorative because amateurs were "ham
  fisted" on their key (Morse Code)
- Adopted by amateurs as badge of honor


Notable Accomplishments by Amateur Radio
========================================

- One of the oldest radio associations in the world, American Radio
  Relay League (ARRL)
    - Begun in 1914 by Hiram Percy Maxim
- Numerous satellite launches
- Led development of packet radio
- Long-distance transmitting around the world using various
    - Skip propagation
    - Moonbounce (Earth-Moon-Earth EME)
    - Meteor scatter
- Development of Slow-Scan and Fast-Scan Television
    - Shortwave radio equipment to send television images using normal
        voice bandwidth
    - Amateur radio operators were online in many cities before
        commercial stations came on the air
- Local, regional, national and international relay networks


Notable Accomplishments by Amateur Radio
========================================

- Quick mobilization during disaster
    - Supplementing and often replacing local phone systems (wired
        and wireless)
    - Work to send gear and people around the world during major
        disasters


Privileges -- What Can a Ham Do?
================================

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
- Operate stations in other countries
    - If reciprocal licensing in place
    - Limited by country laws, not US
- Build and use unlicensed equipment
    - Within regulation
    - It's the operator who's licensed in amateur, not the
        equipment!!!


Privileges -- What Can a Ham Do?
================================

- Help license other hams!
    - Volunteer Examiner
- Help enforce FCC regulations and volunteer band plans
    [ARRL - Band Plan](http://www.arrl.org/band-plan)


License Requirements
====================

- 3 License classes in US:
    - Technician
    - General
    - Amateur Extra
- Technician
    - 35-multiple-guess-question exam
    - No Morse code required
    - Voice privileges
    - Various modes allowed
    - Limited in high-frequency bands
- General
    - 35-multiple-guess-question exam
    - All privileges of Technician
    - Access to 83% of all amateur HF bands
- Amateur Extra
    - 50-multiple-guess-question exam
    - All privileges allowed to amateurs


Costs and Duration
==================

- License good for 10 years
    - Renewal fee, no additional testing


Getting Licensed
================

- Shoot for Technician class license first
    - Learn some basic electronics
    - Learn how to use Ohm's Law
    - Memorize some band-plan information
- Get a study guide
    - ARRL books very good helpful
	    - [Kindle - The ARRL Ham Radio License Manual](https://www.amazon.com/ARRL-Ham-Radio-License-Manual-ebook/dp/B00OZ12X14)
    - Numerous online resources
    - <http://hamexam.org>
- Start making contacts
- Study for the next license


Technician License
==================

- Four knowledge areas to study:
    - Statutes and international agreements
	- Convention and agreements
	- A wee-bit of physics
	- Basic electronics
	

Statutory / International Agreements
====================================

- Many uses of amateur radio frequencies are governed by international
  agreement through the ITU
- All such agreements are encoded in FCC regulations
- The exam **has** questions about these rules and regulations
- Must be memorized ... can't be guessed or derived


Convention
==========

- Many aspects of amateur radio are based on agreements and convetion
  among amateurs
    - Frequencies for code/cw
    - Frequencies for digital modes
    - Whether voice is upper or lower sideband
- The exam **has** questions about these conventions
- Must be memorized ... can't be guessed or derived


A Wee-Bit of Physics
====================

- Radio is a term to describe a specific band of electromagnetic waves
- It's also the aggregating term we use to describe the practical use
  of EM to wirelessly communicate point to point
- You don't need a PhD in physics to communicate
- But you do need to understand a few concepts from physics to
  communicate effectively
- And to get your license

Relationship Between Megahertz and Wavelength
=============================================

- Speed of light ... in meters/second
    - ~300M m/s <--- very important
    - English units won't help you much unless you like gratuitous math
	- [Wikipedia - Speed of Light](https://en.wikipedia.org/wiki/Speed_of_light)
- Megahertz is the number of cycles per second of a wave
    - [Wikipedia - Hertz](https://en.wikipedia.org/wiki/Hertz)
- Wavelength ... the length of the wave
![Wave Frequency](images/Wave_frequency.gif)


Converting Between Megahertz and Wavelength
===========================================

- Electromagnetic waves travel at the speed of light
    - Regardless of their length
- Very short wave complete more cycles per second than very long waves
- To determine the wavelength of a signal at a give frequency, divide
  it's cycle (frequency) into the speed of light

Example:

- 300,000,000 m/s / 150,000,000 hertz (cycles/second)
- == ~2 meters

Notice something?

- When dealing with frequency in the Megahertz range, drop the millions
- ~300 m/s / 150 hertz (cycles/second) == ~2 meters


Basic Electronics
=================

- Just as you don't need to a PhD to communicate as an amateur, you
  don't need a EE
- But you do need to know some basic electronics
- And again, in part to get your license


Ohm's Law
=========

- "Ohm's law states that the current through a conductor between two
  points is directly proportional to the voltage across the two
  points."
    - [Wikipedia - Ohm's Law](https://en.wikipedia.org/wiki/Ohm%27s_law)

![Ohma's Law](images/ohms_law.png)

Where:

- **I** is the current through the conductor in units of amperes
- **V** is the voltage measured across the conductor in units of volts
- **R** is the resistance of the conductor in units of ohms


Ohm's Law
=========

![IVR Relationship](images/OhmsLaw.svg.png)


Ohm's Law
=========

- Exam questions will give you 2 terms and ask for the missing value
- Matter of re-arranging the original equation:
    - V = I x R  (Voltage = Current multiplied by Resistance)
    - R = V / I  (Resistance = Voltage divided by Current)
    - I = V / R  (Current = Voltage Divided by Resistance)

Example:

- A circuit has a current of 5 amperes, and a resistance of 2 ohm:
- How many volts is the circuit?

- V = I x R
- 5 amperes x 2 ohm = 10 volts


Hardware -- What Do I Need?
===========================

- Technically, nothing...but that's no fun
- A receiver, better than nothing, but still no fun
- A transceiver...ahh
    - A handy talkie like the BaoFeng
    - A mobile rig -- not (!!!!) a CB
    - A portable rig
    - A beast
- Handy Talkies
    - Battery powered
    - Typically 1 to 3 bands (70 cm, 2 m, 6 m)
    - 1 to 5 watts
    - 100+ memories for favorite frequencies
    - DTMF keypad
    - "Rubber-ducky" antenna


Hardware -- What Do I Need?
===========================

- Mobile and portable
    - Dual band to all band
    - Voice modes to all mode
    - Microphone
    - Serial or other computer interface
    - 13.8 VDC, sometimes internal batteries
    - Antenna connected by feed line
    - Perhaps an antenna tuner
        - Internal or add-on
- Beast
    - Require AC or perhaps converter
    - Usually all band, not always
        - Some purpose-built rigs, especially DXing
    - Serial or other computer interface
    - Antenna connected by feed line
    - Often an antenna tuner
        - Internal or add-on

Hardware -- What Do I Need?
===========================

- Antenna
- Antenna tuner
- Computer
- Sky's the limit

SDR
===

- Software-Defined Radio
- Replaces purpose-specific circuits with general purpose computing
    and software algorithms

Once You Pass
=============

- Get an inexpensive radio
    - No easier way to lose interest than to not have a radio
    - BaoFeng handy talkies are cheap (\~\$35.00 on Amazon)
- Look for a club
- Join ARRL
    - QST Magazine has tons of info and articles

SDR
===

- Get an RTL SDR
    - About \$20.00
- Get a HackRF, BladeRF or AirSpy
- Get the software
    - rtl-sdr
    - gqrx
    - GNU Radio

Questions
=========

- Questions - You have them, I may have answers

Contact Details
===============

- Aaron Poffenberger
- akp@hypernote.com
- [http://akpoff.com](http://akpoff.com)
- [\@akpoff](https://twiter.com/akpoff)
- This presentation, look for blog post on [http://akpoff.com](http://akpoff.com)
  or [Github](http://github.com/akpoff/talks)
- KG5DQJ


Ham Radio Clubs and License Info
================================

- [FCC](http://wireless.fcc.gov/services/amateur/)
- [ARRL](http://www.arrl.org)
- [ARRL Club Finder](http://www.arrl.org/find-a-club)
- [Gordon West](http://www.gordonwestradioschool.com/)
- [HamExam](http://hamexam.org)
- [QST](http://qst.com)

Radio Gear
==========

- BaoFeng
- [Houston Amateur Radio Supply](http://harsradio.com/)
- Icom
- Kenwood
- Motorola
- Yaesu

SDR People and Resources
========================

- [rtl-sdr](http://www.rtl-sdr.com/)
- [Great Scott Gadgets](https://greatscottgadgets.com/)
    - Michael Ossmann
    - HackRF
    - YardStick
- [BladeRF](http://nuand.com/)
- [AirSpy](http://airspy.us/)

License and Credits
===================

- Copyright Aaron Poffenberger
- [Attribution 4.0 International (CC BY 4.0)](http://creativecommons.org/licenses/by/4.0/)
- [http://creativecommons.org/licenses/by/4.0/](http://creativecommons.org/licenses/by/4.0/)
