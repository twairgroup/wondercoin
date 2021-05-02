Wondercoin Core
=============

Setup
---------------------
Wondercoin Core is the original Wondercoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Wondercoin transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Wondercoin Core, visit [wondercoincore.org](https://wondercoincore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Wondercoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/wondercoin-qt` (GUI) or
- `bin/wondercoind` (headless)

### Windows

Unpack the files into a directory, and then run wondercoin-qt.exe.

### macOS

Drag Wondercoin Core to your applications folder, and then run Wondercoin Core.

### Need Help?

* See the documentation at the [Wondercoin Wiki](https://en.wondercoin.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#wondercoin](https://webchat.freenode.net/#wondercoin) on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#wondercoin).
* Ask for help on the [WondercoinTalk](https://wondercointalk.org/) forums, in the [Technical Support board](https://wondercointalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Wondercoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Android Build Notes](build-android.md)
- [Gitian Building Guide (External Link)](https://github.com/wondercoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Wondercoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.wondercoincore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [WondercoinTalk](https://wondercointalk.org/) forums, in the [Development & Technical Discussion board](https://wondercointalk.org/index.php?board=6.0).
* Discuss project-specific development on #wondercoin-core-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#wondercoin-core-dev).
* Discuss general Wondercoin development on #wondercoin-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#wondercoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [wondercoin.conf Configuration File](wondercoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
