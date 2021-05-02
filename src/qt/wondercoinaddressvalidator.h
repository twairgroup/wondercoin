// Copyright (c) 2011-2020  The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WONDERCOIN_QT_WONDERCOINADDRESSVALIDATOR_H
#define WONDERCOIN_QT_WONDERCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class WondercoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit WondercoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Wondercoin address widget validator, checks for a valid wondercoin address.
 */
class WondercoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit WondercoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // WONDERCOIN_QT_WONDERCOINADDRESSVALIDATOR_H
