---
title: OpenSMTPD for the Real World
subtitle: BSDCan - Mail Server Tutorial
date: 2019-05-15T13:00:00Z
author: Aaron Poffenberger
institute: akp@hypernote.com
email: akp@hypernote.com
tags: email spam
---


# ssl(8)

```
man ssl
```

# Create Self-Signed Certificate

``` {.bash}
# cd $ETC/ssl
cd /etc/ssl

# Generate RSA Certificate
openssl genrsa -out private/server.key 2048

# Generate Certificate Signing Request (CSR)
openssl req -new -key private/server.key \
 -out private/server.csr

# Self-sign CSR
openssl x509 -sha256 -req -days 365 \
-in private/server.csr \
-signkey private/server.key \
-out /etc/ssl/server.crt
```


# smtpctl

- Documentation - smtpctl(8)

``` {.bash}
man smtpctl
```


# Encrypt Password for Use with *auth* Command

```
smtpctl password
```


# Logging

``` {.bash}
# minimal logging
smtpctl log brief

# verbose logging
smtpctl log verbose
```


# Show

```
# show queue messages
smtpctl show queue
ebc3909d5c70e447|local|mda|auth|test_user@example.com|user@mail.example.org|\
user@mail.example.org|1465371066|1465716666|0|10|pending|765|\
"smtpd: Delivery error: 550 5.1.0 id=12326-07 - Rejected by \
next-hop MTA on relaying, from MTA(smtp:[127.0.0.1]:10025): \
550 Invalid recipient"


# show envelope
smtpctl show ebc3909d5c70e447
```

# Trace *subsystem*

```
# (aliases/virtual/forward expansion)
smtpctl trace expand

# (matched by incoming session)
smtpctl trace rules

# (incoming sessions)
smtpctl trace smtp

# alternatively
smtpd -dvT expand -T rules -T smtp
```

# smtpd

- Documentation - smtpd(8)

``` {.bash}
man smtpd
```

# Check Configuration

```
smtpd -nf /etc/mail/smtpd.conf
```

# Start in Foreground

``` {.bash}
# with verbose logging
smtpd -dv

# with some tracing
smtpd -dvT expand -T rules -T smtp

# with all tracing
smtpd -dvT all
```
