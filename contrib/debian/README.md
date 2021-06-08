
Debian
====================
This directory contains files used to package wondercoind/wondercoin-qt
for Debian-based Linux systems. If you compile wondercoind/wondercoin-qt yourself, there are some useful files here.

## wondercoin: URI support ##


wondercoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install wondercoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your wondercoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/wondercoin128.png` to `/usr/share/pixmaps`

wondercoin-qt.protocol (KDE)

