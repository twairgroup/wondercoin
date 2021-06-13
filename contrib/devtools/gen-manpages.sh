#!/bin/sh

TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
SRCDIR=${SRCDIR:-$TOPDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

WONDERCOIND=${WONDERCOIND:-$SRCDIR/wondercoind}
WONDERCOINCLI=${WONDERCOINCLI:-$SRCDIR/wondercoin-cli}
WONDERCOINTX=${WONDERCOINTX:-$SRCDIR/wondercoin-tx}
WONDERCOINQT=${WONDERCOINQT:-$SRCDIR/qt/wondercoin-qt}

[ ! -x $WONDERCOIND ] && echo "$WONDERCOIND not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
WDCVER=($($WONDERCOINCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for wondercoind if --version-string is not set,
# but has different outcomes for wondercoin-qt and wondercoin-cli.
echo "[COPYRIGHT]" > footer.h2m
$WONDERCOIND --version | sed -n '1!p' >> footer.h2m

for cmd in $WONDERCOIND $WONDERCOINCLI $WONDERCOINTX $WONDERCOINQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${WDCVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${WDCVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
