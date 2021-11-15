// Copyright (c) 2017-2021 The Espers Project/CryptoCoderz Team
// Copyright (c) 2020-2021 The Konjungate Team

#ifndef FRACTALUI_H
#define FRACTALUI_H

#include <QWidget>

namespace Ui {
    class FractalUI;
}
class ClientModel;
class WalletModel;

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Overview ("home") page widget */
class FractalUI : public QWidget
{
    Q_OBJECT

public:
    explicit FractalUI(QWidget *parent = 0);
    ~FractalUI();
    void setModel(FractalUI *model);

public slots:

signals:

private:
    Ui::FractalUI *ui;
        WalletModel *model;

private slots:

        void on_cCON_clicked();
        void on_netTokensBtn_clicked();
        void on_netNFTbtn_clicked();
};

#endif // FRACTALUI_H
