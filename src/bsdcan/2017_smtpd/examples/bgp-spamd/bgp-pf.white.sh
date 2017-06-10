#!/bin/sh
AS=65066

bgpctl show rib community ${AS}:42 | \
  sed -e '1,4d' -e 's/\/.*$//' -e 's/[ \*\>]*//' \
      > /var/db/bgp.white

pfctl -t bgp-white -T replace -f /var/db/bgp.white

# EOF
