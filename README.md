# WonderCoin Core

![WonderCoin](https://i0.wp.com/wondercoin.ca/wp-content/uploads/2021/04/logo_transparent_background.png?fit=750%2C430&ssl=1)

WonderCoin is a brand new digital currency that will serve the social networking sites of all mankind!




- **Website:** [Wondercoin.ca](https://wondercoin.ca/)

## License – Much license ⚖️
WonderCoin Core is released under the terms of the MIT license. See
[COPYING](COPYING) for more information or see
[opensource.org](https://opensource.org/licenses/MIT)

## Development and contributions--Right now only 2 people are working on WonderCoin
Development is in progress, the development team and other volunteers,
The freedom to work in their tree, and function or Bug fix is ready.

#### Branches
There are 3 types of branches in this repository:

- **S:** Stable, The stable release version has been tested many times in different environments.
- **N:** Relatively stable, it is the latest preview version but not the release version.
- **T:** Unstable, Untested non-release version, only used for testing some new features.

If there is any change in the version number later, it will be updated here

#### Maintenance reward

We very much welcome developers from all over the world to jointly maintain WonderCoin Core. 
In order to thank and inspire developers who have contributed to the maintenance of WonderCoin Core, the official will reward the top ten developers with the highest stars.

## Basic question ❓

### How much WonderCoin can found?
WonderCoin is not unlimited. There are 200 million WonderCoins hidden in all blockchains.
And WonderCoin has the ability to withdraw transactions within 5 seconds to ensure that you have a second chance to check your payment.

## Mining information ⛏

WonderCoin uses the scrypt key derivation function as its
Proof of work, the target time is one minute per block, the most difficult
Re-adjust after each block. The block reward is fixed, halved every time
200,000 blocks. Starting from the 700,000 block.

Initially, we designed an anti-attack rate of 51% to ensure that WonderCoin is safe.

WonderCoin belongs to all mankind. We hope everyone can get WonderCoin through their own computer. If there is a professional Rig that disrupts this balance later, we will take measures to deal with the professional Rig that disrupts our happiness.

**The original block reward schedule:**

Twairgroup is calculating. To be honest, I don't believe his mathematics. Because he has calculated for more than 3 days. (Whisper)

**The original block reward schedule, with one-minute block targets and four-hour difficulty readjustment:**

Twairgroup is calculating.

### Please help us make Wondercoin-QT

We encountered some interesting bugs during development. Of course, the official release version of WonderCoin-QT has no problems.

### Test ports

- RPC 18666
- P2P 18888

## Prepare for WonderCoin Core

- Linux OS (https://ubuntu.com/download)

Resource pack

- sudo apt-get install make
- sudo apt-get install gcc
- sudo apt-get install g++
- sudo apt-get install build-essential
- sudo apt-get install libtool
- sudo apt-get install autotools-dev
- sudo apt-get install autoconf
- sudo apt-get install pkg-config
- sudo apt-get install libssl-dev
- sudo apt-get install libevent-dev
- sudo apt-get install libboost-all-dev
- sudo apt-get install libminiupnpc-dev
- sudo apt-get install libqt4-dev
- sudo apt-get install libprotobuf-de
- sudo apt-get install protobuf-compiler
- sudo apt-get install libqrencode-dev
- sudo apt-get install libdb-dev
- sudo apt-get install libdb++-dev
- sudo apt-get install git

##Install WonderCoin Core Steps

Get clone for github

- ``sudo git clone https://github.com/twairgroup/wondercoin.git``
- Use ``cd`` command to open the WonderCoin dir

Before next step make sure u are in WonderCoin dir,The path should like(eg) ``/home/twairgroup/WonderCoin``

- ``./autogen.sh``

- ``./configure``
- ``make``

The steps for install until now is finished

Command for start WonderCoind&WonderCoin-QT

- ``cd/src``
- ``wondercoind``

Command for start WonderCoin-QT

- ``cd/src/qt``
-  ``wondercoind-qt``

If you meet a issue when you tring to install libqt4-dev

- ``Source cant be found`` Please acces this link to solve the issue:(https://ubuntuhandbook.org/index.php/2020/07/install-qt4-ubuntu-20-04/)

Ifyou meet this issue when you tring to start WonderCoin-QT

- Please use this commad ``cd/scr/qt``




## Development WonderCoin Core

**compiling for debugging**

Run `./autogen.sh` with the `./configure --with-incompatible-bdb` option, then `make`.
