#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "providerbase.h"
#include <QWidget>

namespace Ui {
class ProviderConnectionView;
}

class ProviderConnectionView : public QWidget
{
    Q_OBJECT

public:
    explicit ProviderConnectionView(QWidget *parent = nullptr);
    ~ProviderConnectionView();

    void setProviderConnection(ProviderConnectionBase *p);
private:
    void insertStatus(const QString &direction, const QString &type, const QString &topic, const QString &id, const QString &content);
    Ui::ProviderConnectionView *ui;
    ProviderConnectionBase *m_connection;
};

#endif // MAINWINDOW_H
