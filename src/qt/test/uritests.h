// Copyright (c) 2009-2015 The Bitcoin Core developers
// Copyright (c) 2021 The Wondercoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WONDERCOIN_QT_TEST_URITESTS_H
#define WONDERCOIN_QT_TEST_URITESTS_H

#include <QObject>
#include <QTest>

class URITests : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void uriTests();
};

#endif // WONDERCOIN_QT_TEST_URITESTS_H
