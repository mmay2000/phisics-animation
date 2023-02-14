#include "mainwindow.h"
#include "ui_mainwindow.h"

enum OscillationCases
{
    classic,
    damping
};


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Визуализация векторного поля точечного осциллятора (Фазовое пр-во)");

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));


    tBegin = 0;
    tEnd = 6.28;

    ui->widget->xAxis->setRange(-10, 10);
    ui->widget->yAxis->setRange(-10, 10);

    ui->widget->xAxis->setLabel("Координата (X)");
    ui->widget->yAxis->setLabel("Скорость (V)");

    N = (tEnd - tBegin)/h + 2;

    for(t = tBegin; t < tEnd; t += h)
    {
        double xt = X_0 * qCos(t) + V_0 * qSin(t), vt = -X_0 * qSin(t) + V_0 * qCos(t);
        x.push_back(xt);
        v.push_back(vt);
        QCPItemLine *arrow = new QCPItemLine(ui->widget);
        arrow->start->setCoords(prevX, prevV);
        arrow->end->setCoords(xt, vt);
        arrow->setHead(QCPLineEnding::esSpikeArrow);
        arrows.push_back(arrow);
        prevX = xt;
        prevV = vt;
    }

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, v);
    ui->widget->graph(0)->setLineStyle(QCPGraph::LineStyle::lsNone);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TimerSlot()
{
    if(time < 20 * N)
    {
        if(t < tEnd)
        {
            double xt, vt;
            switch(oscillationCase)
            {
            case classic:
                xt = X_0 * qCos(t) + V_0 * qSin(t);
                vt = -X_0 * qSin(t) + V_0 * qCos(t);
                x.push_back(xt);
                v.push_back(vt);
                break;

            case damping:
                xt = qExp(-damp*t)*(qSin(dampSqrt*t)*dampSqrtInv*(-damp*X_0 - V_0/2) + X_0 * qCos(dampSqrt*t));
                vt = qExp(-damp*t)*(qSin(dampSqrt*t)*((X_0*((1 - damp*damp)*dampSqrtInv) + 2*damp) - damp*dampSqrtInv*V_0)
                                    + V_0*qCos(dampSqrt*t));
                x.push_back(xt);
                v.push_back(vt);
                break;
            }

            QCPItemLine *arrow = new QCPItemLine(ui->widget);
            arrow->start->setCoords(prevX, prevV);
            arrow->end->setCoords(xt, vt);
            arrow->setHead(QCPLineEnding::esSpikeArrow);
            prevX = xt;
            prevV = vt;
            arrows.push_back(arrow);
            t+=h;
        }
        time += 20;
    }
    else
    {
        time = 0;
        timer->stop();
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, v);
    ui->widget->graph(0)->setLineStyle(QCPGraph::LineStyle::lsNone);
    ui->widget->replot();
}



void MainWindow::on_radioButton_classicCase_clicked(bool checked)
{
    if(checked)
    {
        ui->widget->clearGraphs();
        t = tBegin;
        tEnd = ui->doubleSpinBox_AnimationTime->value();
        N = (tEnd - tBegin)/h + 2;
        prevX = X_0;
        prevV = V_0;
        x.clear();
        v.clear();

        for(QCPItemLine* arr : arrows)
            ui->widget->removeItem(arr);
        arrows.clear();

        time = 0;
        timer->start(20);
        oscillationCase = classic;
    }
}




void MainWindow::on_radioButton_2_clicked(bool checked) //Damping radioButton
{
    if(checked)
    {
        ui->widget->clearGraphs();
        t = tBegin;
        tEnd = ui->doubleSpinBox_AnimationTime->value();
        N = (tEnd - tBegin)/h + 2;
        prevX = X_0;
        prevV = V_0;
        x.clear();
        v.clear();

        for(QCPItemLine* arr : arrows)
            ui->widget->removeItem(arr);
        arrows.clear();

        time = 0;
        timer->start(20);
        oscillationCase = damping;
    }
}


void MainWindow::on_doubleSpinBox_X_0_valueChanged(double arg1)
{
    X_0 = arg1;
}


void MainWindow::on_doubleSpinBox_2_V_0_valueChanged(double arg1)
{
    V_0 = arg1;
}


void MainWindow::on_doubleSpinBox_damping_valueChanged(double arg1)
{
    damp = arg1;
    dampSqrt = qSqrt(arg1);
    dampSqrtInv = 1/dampSqrt;
}

