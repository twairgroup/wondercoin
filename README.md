# WonderCoin Core

![WonderCoin](https://i0.wp.com/wondercoin.ca/wp-content/uploads/2021/04/logo_transparent_background.png?fit=750%2C430&ssl=1)

WonderCoin is a brand new digital currency that will serve the social networking sites of all mankind!




- **Website:** [Wondercoin.ca](https://wondercoin.ca/)

### WonderCoin Community 

https://discord.gg/gdzG42kG

https://t.me/joinchat/UqUUP7nnhtUyMjZh

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
WonderCoin is not unlimited. There are 200,000,000 WonderCoins hidden in all blockchains.
And WonderCoin has the ability to withdraw transactions within 5 seconds to ensure that you have a second chance to check your payment.

## Mining information ⛏

WonderCoin uses the scrypt key derivation function as its
Proof of work, the target time is one minute per block, the most difficult
Re-adjust after each block. The block reward is fixed, halved every time
200,000 blocks. Starting from the frist block.

Initially, we designed an anti-attack rate of 51% to ensure that WonderCoin is safe.

WonderCoin belongs to all mankind. We hope everyone can get WonderCoin through their own computer. If there is a professional Rig that disrupts this balance later, we will take measures to deal with the professional Rig that disrupts our happiness.

WonderCoin wallet still supports Solo Mining (getblocktemplate)
Of course, this is only the initial stage that you can use Solo mining (because there is no mining pool)
We will remove RPC Solo Mining in the new version later

### Solo Mining Tutorial
1,Find ``.wondercoin``folder in your PC

2,Create a empty file named:``wondercoin.conf``

3,Copy those command into your ``wondercoin.conf``

rpcuser=your username

rpcpassword=your password

rpcport=8666

rpcallowip=127.0.0.1

server=1

listen=1

4,Save the file and restart ``wondercoind&wondercoin-qt``

5,Downlaod ``CPUminer`` https://github.com/jgarzik/cpuminer

6,Before you make the ``CPUminer`` please execute this code ``libcurl4-openssl-dev``

7,Finished CPUminer and copy this command for start mining

./minerd --user yourRPCusername --pass yourRPCpassowrd --url http://127.0.0.1:8666/ --threads 4 --coinbase-addr yourwalletaddress --coinbase-sig "wondercoin" -a sha256d -D

**The original block reward schedule:**

50 for each block

**The original block reward schedule, with Three-minute block targets and One-hour difficulty readjustment:**

### Wondercoin-QT

We have prepared a high-definition QT wallet compatible with multiple languages for WonderCoin.

### Test ports

- RPC 18666
- P2P 18888

## Prepare for WonderCoin Core

- Linux OS (https://ubuntu.com/download) Minimum requirements：16.0

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

## Install WonderCoin Core Steps

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
- or you can try those commands
- sudo apt-get install qt4-dev
- sudo apt-get install qt4-default 
- sudo apt-get install qttools4-dev-tools
- If you meet this problem when you trying to configure WonderCoin
- ``checking whether to build Wondercoin Core GUI... no``
- ``configure: WARNING: LRELEASE not found; wondercoin-qt frontend will not be built``
- Please follow those steps trying to slove the problem
- ``sudo apt-get install qtbase5-dev``
- ``sudo apt-get install qttools5-dev-tools``
- Now reconfigure WonderCoin one more time,the problem was sloved.
- Because wondercoin need QT5

Ifyou meet this issue when you tring to start WonderCoin-QT

- Please use this commad ``cd/scr/qt``




## Development WonderCoin Core

**compiling for debugging**

Run `./autogen.sh` with the `./configure --with-incompatible-bdb` option, then `make`.
### Help develop WonderCoin
Everyone can help develop WonderCoin to make it better, join WonderCoin to develop Discord.
Link coming soon
