#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QTimer>
#include <QtMath>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void TimerSlot();


    void on_radioButton_classicCase_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_doubleSpinBox_X_0_valueChanged(double arg1);

    void on_doubleSpinBox_2_V_0_valueChanged(double arg1);

    void on_doubleSpinBox_damping_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
    double tBegin, tEnd, h = 0.2093, t, X_0 = 7, V_0 = 7, damp = 0.25, dampSqrt = 0.866, dampSqrtInv = 1.155;
    int N, time = 0;
    int oscillationCase = 0;
    double prevX = X_0, prevV = V_0;

    QVector<double> x, v;
    QVector<QCPItemLine*> arrows;
    QTimer* timer;
};
#endif // MAINWINDOW_H
