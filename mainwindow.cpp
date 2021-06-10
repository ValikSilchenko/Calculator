#include "mainwindow.h"
#include "calculator.h"
#include "functions.cpp"
#include <QAbstractButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIcon icon = QIcon("calcul.png");
    this->setWindowIcon(icon);

    {
        connect(ui->resultButton, SIGNAL(clicked()), this, SLOT(getRes()));
        connect(ui->binaryBtnGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(binary(QAbstractButton*)));
        connect(ui->piButton, SIGNAL(clicked()), this, SLOT(getConst()));
        connect(ui->eButton, SIGNAL(clicked()), this, SLOT(getConst()));
        connect(ui->factButton, SIGNAL(clicked()),this, SLOT(fact()));
        connect(ui->moduleButton, SIGNAL(clicked()), this, SLOT(module()));
        connect(ui->cubeButton, SIGNAL(clicked()), this, SLOT(cube()));
        connect(ui->cubeRootButton, SIGNAL(clicked()), this, SLOT(cubeRoot()));
        connect(ui->tenInPowerButton, SIGNAL(clicked()), this, SLOT(tenInN()));
        connect(ui->twoInPowerButton, SIGNAL(clicked()), this, SLOT(twoInN()));
        connect(ui->eInPowerButton, SIGNAL(clicked()), this, SLOT(eInN()));
        connect(ui->decLogButton, SIGNAL(clicked()), this, SLOT(lg()));
        connect(ui->natLogButton, SIGNAL(clicked()), this, SLOT(ln()));
        connect(ui->powerButton, SIGNAL(clicked()), this, SLOT(xInN()));
        connect(ui->logButton, SIGNAL(clicked()), this, SLOT(logX()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::check() // checking and doing necessary actions
{
    if (ui->label->text() == "error") on_clearButton_clicked();

    if (resPressed) {
        ui->optLabel->clear();
        sign = "";
        f = false;
        resPressed = false;
        expression = ui->label->text();
    }

    if (specialBtnPressed) {
        double tempRes = ui->label->text().toDouble();
        on_clearButton_clicked();
        ui->label->setText(QString::number(tempRes));
        expression = ui->label->text();
    }

    if (ui->optLabel->text() != "")  // getting sign if it's not in variable
        if (!("0" <= ui->optLabel->text()[ui->optLabel->text().length() - 1]
              && ui->optLabel->text()[ui->optLabel->text().length() - 1] <= "9")) {
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            expression = ui->optLabel->text() + ui->label->text();
        }
}

void MainWindow::binary(QAbstractButton * button)
{
    if (ui->label->text() == "error") on_clearButton_clicked();

    if (ui->label->text().contains(".") && ! specialBtnPressed && ! f && ! xInNPressed){  // converting QString->Double->QString to exclude float value with zero or empty value after dot
        ui->label->setText(QString::number(ui->label->text().toDouble()));
        expression = ui->optLabel->text() + ui->label->text();
    }

    if (ui->label->text().toDouble() < 0 && ! resPressed && ! specialBtnPressed && ! xInNPressed && ! logButtonPressed) expression = ui->optLabel->text() + "(" + ui->label->text() + ")";

    if (resPressed) {
        ui->optLabel->setText(ui->label->text());
        sign = "";
        expression = ui->label->text();
        resPressed = false;
    }

    if (xInNPressed) {
        expression = ui->optLabel->text();
        expression.insert(expression.length() - 1, ui->label->text());
        ui->label->setText(QString::number(pow(xDeg, ui->label->text().toDouble())));
    }

    if (logButtonPressed) {
        expression = ui->optLabel->text();
        expression.insert(expression.length() - 1, ui->label->text());

        if (xLog > 0 && ui->label->text().toDouble() > 0 && ui->label->text().toDouble() != 1)
            ui->label->setText(QString::number(normalLog(ui->label->text().toDouble(), xLog)));
        else {
            on_clearButton_clicked();
            ui->label->setText("error");
            return;
        }
    }

    if (ui->label->text() == "0" && expression == "") expression = "0";

    ui->optLabel->setText(expression + button->text());

    if (sign == "") sum = ui->label->text().toDouble();  // checking that only one value entered before sign
    else if (! f) {
        if (!(specialBtnPressed)) {
            if (sign == "÷" && ui->label->text() == "0") {  // checking dividing by zero
                on_clearButton_clicked();
                ui->label->setText("error");
            } else sum = simpleFunctions(sign, sum, ui->label->text().toDouble());
        }
        if (ui->label->text() != "error") ui->label->setText(QString::number(sum));  // setting sum if not error
    }

    // setting to zero all flags except "f" that indicates binaryBitton clicked

    specialBtnPressed = false;
    xInNPressed = false;
    logButtonPressed = false;
    f = true;
}

void MainWindow::on_digitsBtnGroup_buttonClicked(QAbstractButton * button)
{
    if (resPressed || specialBtnPressed || ui->label->text() == "error") on_clearButton_clicked();

    if (expression == "" || ui->label->text() == "0") ui->label->clear();  // checking that entering value is first
    else  if (f)  {  // checking that binaryButton was clicked
        ui->label->clear();
        if (!xInNPressed && !logButtonPressed) sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
        f = false;
    }

    ui->label->setText(ui->label->text() + button->text());  // adding new digit to label

    expression = ui->optLabel->text() + ui->label->text();  // adding new label number to expression  variable
}

void MainWindow::on_clearButton_clicked()
{
    ui->label->clear();
    ui->label->setText("0");
    ui->optLabel->clear();
    sign = "";
    f = false;
    resPressed = false;
    specialBtnPressed = false;
    xInNPressed = false;
    logButtonPressed = false;
    xDeg = 0;
    sum = 0;
    expression = "";
}

void MainWindow::on_delLastSymbBtn_clicked()
{
    if (ui->label->text() == "error") on_clearButton_clicked();

    if (! resPressed && !(specialBtnPressed)){
        if (ui->label->text() != "0"){
            int lenght = ui->label->text().length();
            QString new_str = "";  // variable with new string
            int i = 0;
            while (i < lenght - 1) {
                new_str += ui->label->text()[i];
                i++;
            }
            if (new_str != "") ui->label->setText(new_str);
            else ui->label->setText("0");  // if full string was deleted
            expression = ui->optLabel->text() + new_str;
        }
    }
}

void MainWindow::getRes()
{
    bool tempF = false;

    // converting QString->double->QString to exclude x.0
    ui->label->setText(QString::number(ui->label->text().toDouble()));

    if (! resPressed && ui->optLabel->text() != "") {  // checking that expression exist

        if (xInNPressed) {
            expression = ui->optLabel->text();
            expression.insert(expression.length() - 1, ui->label->text());
            ui->label->setText(QString::number(pow(xDeg, ui->label->text().toDouble())));
            if (sign == "") sum = ui->label->text().toDouble();
            else sum = simpleFunctions(sign, sum, ui->label->text().toDouble());
        }

        if (logButtonPressed) {
            expression = ui->optLabel->text();
            expression.insert(expression.length() - 1, ui->label->text());

            if (xLog > 0 && ui->label->text().toDouble() > 0 && ui->label->text().toDouble() != 1)
                ui->label->setText(QString::number(normalLog(ui->label->text().toDouble(), xLog)));
            else {
                on_clearButton_clicked();
                ui->label->setText("error");
                return;
            }

            if (sign == "") sum = ui->label->text().toDouble();
            else sum = simpleFunctions(sign, sum, ui->label->text().toDouble());
        }

        // getting last entered sign if it's not in variable
        if (sign == "" && !(specialBtnPressed) && !(xInNPressed) && !(logButtonPressed)
                && !("0" <= ui->optLabel->text()[ui->optLabel->text().length() - 1]
                && ui->optLabel->text()[ui->optLabel->text().length() - 1] <= "9")) {
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            expression = ui->optLabel->text() + ui->label->text();
        }

        // setting braces for numbers < 0
        if (ui->label->text().toDouble() < 0 && ! specialBtnPressed && ! xInNPressed && ! logButtonPressed) expression = ui->optLabel->text() + "(" + ui->label->text() + ")";

        ui->optLabel->setText(expression);

        if (! specialBtnPressed && ! xInNPressed && ! logButtonPressed)
            if (sign == "÷" && ui->label->text() == "0") {  // checking for dividing by zero
                on_clearButton_clicked();
                ui->label->setText("error");
            } else sum = simpleFunctions(sign, sum, ui->label->text().toDouble());
        else {
            tempF = true;
        }

        if (!(ui->label->text() == "error")) {
            if (sign == "" && !(specialBtnPressed) && !(xInNPressed) && !(logButtonPressed))  ui->optLabel->setText(ui->optLabel->text() + ui->label->text());

            ui->optLabel->setText(ui->optLabel->text() + "=");
            ui->label->setText(QString::number(sum));
        }
    }
    if (tempF) {
        specialBtnPressed = false;
        xInNPressed = false;
        logButtonPressed = false;
    }
    resPressed = true;
}

void MainWindow::on_negativeButton_clicked()
{
    if (ui->label->text() == "error") on_clearButton_clicked();

    if (f) {
        ui->label->setText("0");
        f = false;
    }  else {
        if (specialBtnPressed) ui->optLabel->clear();

        if (resPressed) {
            double tempRes = sum;
            on_clearButton_clicked();
            resPressed = true;
            sum = -tempRes;
            ui->label->setText(QString::number(sum));
        }
        else ui->label->setText(QString::number(-ui->label->text().toDouble()));

        if (ui->label->text() != "0") expression = ui->optLabel->text() + ui->label->text();
    }
}

void MainWindow::on_floatButton_clicked()
{
    if (resPressed || specialBtnPressed || ui->label->text() == "error") on_clearButton_clicked();

    if (f) {
        if (expression != "") sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
        ui->label->setText("0");  // checking for binary button clicked
    }

    if (!(ui->label->text().contains("."))) {
        ui->label->setText(ui->label->text() + ".");
        f = false;
        expression += ui->label->text();
    }
}

void MainWindow::on_sqrtButton_clicked()
{
    if (! xInNPressed) {
        check();

        if (!(ui->label->text()[0] == "-")) {  // checking for a negaive number in sqrt
            if (sign == "") sum = sqrt(ui->label->text().toDouble());
            else {
                sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
                sum = simpleFunctions(sign, sum, sqrt(ui->label->text().toDouble()));
            }

            // setting sqrt sign and braces around number
            if (ui->label->text() == "0" && expression != "0") expression += ui->sqrtButton->text() + "(0)";
            else {
                expression.insert(expression.length() - ui->label->text().length(), ui->sqrtButton->text());
                expression.insert(expression.length() - ui->label->text().length(), "(");
                expression += ")";
            }
            ui->label->setText(QString::number(sqrt(ui->label->text().toDouble())));
            ui->optLabel->setText(expression);
            specialBtnPressed = true;
        } else {
        on_clearButton_clicked();
        ui->label->setText("error");  // setting error text if negative number in sqrt
    }
    }
}

void MainWindow::on_sqrButton_clicked()
{
    if (! xInNPressed) {
        check();

        if (sign == "") sum = pow(ui->label->text().toDouble(), 2);  // checking that only one number entered
        else {  // esle getting last entered sign
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            sum = simpleFunctions(sign, sum, pow(ui->label->text().toDouble(), 2));
        }

        if (expression == "") expression = "0";  // if nothing entered setting 0 in expression

        expression = ui->optLabel->text() + "sqr(" + ui->label->text();
        expression += ")";
        ui->label->setText(QString::number(pow(ui->label->text().toDouble(), 2)));
        ui->optLabel->setText(expression);
        specialBtnPressed = true;
    }
}

void MainWindow::on_reverseButton_clicked()
{
    if (! xInNPressed) {
        if (ui->label->text() == "error") on_clearButton_clicked();

        if (resPressed) {
            ui->optLabel->clear();
            sign = "";
            f = false;
            resPressed = false;
            expression = ui->label->text();
        }

        if (specialBtnPressed) {
            double tempRes = ui->label->text().toDouble();
            on_clearButton_clicked();
            ui->label->setText(QString::number(tempRes));
            expression = ui->label->text();
        }

        if (ui->label->text() != "0"){  // checking for divide by zero
            if (ui->optLabel->text() != "")
                if (!("0" <= ui->optLabel->text()[ui->optLabel->text().length() - 1] && ui->optLabel->text()[ui->optLabel->text().length() - 1] <= "9")) {
                    sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
                    expression = ui->optLabel->text() + ui->label->text();
                }

            if (sign == "") sum = 1 / ui->label->text().toDouble();
            else sum = simpleFunctions(sign, sum, 1 / ui->label->text().toDouble());

            expression = ui->optLabel->text() + "1/(" + ui->label->text();
            expression += ")";
            ui->label->setText(QString::number(1 / ui->label->text().toDouble()));
            ui->optLabel->setText(expression);
            specialBtnPressed = true;
        } else {
        on_clearButton_clicked();
        ui->label->setText("error");  // setting error text in label if try divide by zero
    }
    }
}

void MainWindow::on_pushButton_switch_clicked() // switch to matrix calculator
{
    ui->stackedWidget->setCurrentIndex(1);
    this->setMinimumSize(770, 340);
    this->resize(770, 340);
    this->setMaximumSize(770, 340);
}

void MainWindow::on_plus_radioButton_clicked()
{
    if(ui->plus_radioButton->isChecked()) {
        ui->text_action->setText("+");

        int y1 = ui->line1_1->text().toInt()+ui->line2_1->text().toInt();
        ui->line3_1->setText(QString::number(y1));

        int y2 =  ui->line1_2->text().toInt()+ui->line2_2->text().toInt();
        ui->line3_2->setText(QString::number(y2));

        int y3 = ui->line1_3->text().toInt()+ ui->line2_3->text().toInt();
        ui->line3_3->setText(QString::number(y3));

        int y4 = ui->line1_4->text().toInt()+ui->line2_4->text().toInt();
        ui->line3_4->setText(QString::number(y4));

        int y5 = ui->line1_5->text().toInt()+ui->line2_5->text().toInt();
        ui->line3_5->setText(QString::number(y5));

        int y6 = ui->line1_6->text().toInt()+ui->line2_6->text().toInt();
        ui->line3_6->setText(QString::number(y6));

        int y7 = ui->line1_7->text().toInt()+ui->line2_7->text().toInt();
        ui->line3_7->setText(QString::number(y7));

        int y8 = ui->line1_8->text().toInt()+ui->line2_8->text().toInt();
        ui->line3_8->setText(QString::number(y8));

        int y9 = ui->line1_9->text().toInt()+ui->line2_9->text().toInt();
        ui->line3_9->setText(QString::number(y9));
    }
    on_pushButton_clicked();
}

void MainWindow::on_multi_radioButton_clicked()
{
    if(ui->multi_radioButton->isChecked()) {
        ui->text_action->setText("*");
        int c1 = ui->line1_1->text().toInt();
        int c2 = ui->line1_2->text().toInt();
        int c3 = ui->line1_3->text().toInt();
        int c4 = ui->line1_4->text().toInt();
        int c5 = ui->line1_5->text().toInt();
        int c6 = ui->line1_6->text().toInt();
        int c7 = ui->line1_7->text().toInt();
        int c8 = ui->line1_8->text().toInt();
        int c9 = ui->line1_9->text().toInt();

        int q1 = ui->line2_1->text().toInt();
        int q2 = ui->line2_2->text().toInt();
        int q3 = ui->line2_3->text().toInt();
        int q4 = ui->line2_4->text().toInt();
        int q5 = ui->line2_5->text().toInt();
        int q6 = ui->line2_6->text().toInt();
        int q7 = ui->line2_7->text().toInt();
        int q8 = ui->line2_8->text().toInt();
        int q9 = ui->line2_9->text().toInt();

        ui->line3_1->setText(QString::number(c1*q1+c2*q4+c3*q7));
        ui->line3_2->setText(QString::number(c1*q2+c2*q5+c3*q8));
        ui->line3_3->setText(QString::number(c1*q3+c2*q6+c3*q9));
        ui->line3_4->setText(QString::number(c4*q1+c5*q4+c6*q7));
        ui->line3_5->setText(QString::number(c4*q2+c5*q5+c6*q8));
        ui->line3_6->setText(QString::number(c4*q3+c5*q6+c6*q9));
        ui->line3_7->setText(QString::number(c7*q1+c8*q4+c9*q7));
        ui->line3_8->setText(QString::number(c7*q2+c8*q5+c9*q8));
        ui->line3_9->setText(QString::number(c7*q3+c8*q6+c9*q9));
    }
    on_pushButton_clicked();
}

void MainWindow::on_pushButton_clicked() // calculating det
{
        int deta = ui->line1_1->text().toInt()*ui->line1_5->text().toInt()*ui->line1_9->text().toInt() +
                ui->line1_2->text().toInt()*ui->line1_6->text().toInt()*ui->line1_7->text().toInt() +
                ui->line1_3->text().toInt() * ui->line1_4->text().toInt() * ui->line1_8->text().toInt() -
                ui->line1_7->text().toInt()*ui->line1_5->text().toInt()*ui->line1_3->text().toInt() -
                ui->line1_8->text().toInt()*ui->line1_6->text().toInt()*ui->line1_1->text().toInt() -
                ui->line1_9->text().toInt()*ui->line1_4->text().toInt()*ui->line1_2->text().toInt();

        int detb = ui->line2_1->text().toInt()*ui->line2_5->text().toInt()*ui->line2_9->text().toInt() +
                ui->line2_2->text().toInt()*ui->line2_6->text().toInt()*ui->line2_7->text().toInt() +
                ui->line2_3->text().toInt() * ui->line2_4->text().toInt() * ui->line2_8->text().toInt() -
                ui->line2_7->text().toInt()*ui->line2_5->text().toInt()*ui->line2_3->text().toInt() -
                ui->line2_8->text().toInt()*ui->line2_6->text().toInt()*ui->line2_1->text().toInt() -
                ui->line2_9->text().toInt()*ui->line2_4->text().toInt()*ui->line2_2->text().toInt();

        int detc = ui->line3_1->text().toInt()*ui->line3_5->text().toInt()*ui->line3_9->text().toInt() +
                ui->line3_2->text().toInt()*ui->line3_6->text().toInt()*ui->line3_7->text().toInt() +
                ui->line3_3->text().toInt() * ui->line3_4->text().toInt() * ui->line3_8->text().toInt() -
                ui->line3_7->text().toInt()*ui->line3_5->text().toInt()*ui->line3_3->text().toInt() -
                ui->line3_8->text().toInt()*ui->line3_6->text().toInt()*ui->line3_1->text().toInt() -
                ui->line3_9->text().toInt()*ui->line3_4->text().toInt()*ui->line3_2->text().toInt();

        ui->det_a_label->setText(QString::number(deta));
        ui->det_b_label->setText(QString::number(detb));
        ui->det_c_label->setText(QString::number(detc));
}

void MainWindow::on_pushButton_switchToMain_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    this->setMinimumSize(QSize(551, 622));
    this->resize(551, 622);
    this->setMaximumSize(16777215, 16777215);
}

void MainWindow::getConst()
{
    if (ui->label->text() == "error" || specialBtnPressed || resPressed) on_clearButton_clicked();

    if (this->sender() == ui->piButton) {
        ui->label->setText(QString::number(M_PI));
        expression += QString::number(M_PI);
    }
    else if (this->sender() == ui->eButton) {
        ui->label->setText(QString::number(M_E));
        expression += QString::number(M_E);
    }

}

void MainWindow::fact()
{
    if (! xInNPressed) {
        check();

        if (ui->label->text()[0] == "-" || ui->label->text().contains(".")) {
            on_clearButton_clicked();
            ui->label->setText("error");
        } else {
            if (sign == "") sum = factorial(ui->label->text().toUInt());
            else {
                sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
                sum = simpleFunctions(sign, sum, factorial(ui->label->text().toUInt()));
            }

            expression = ui->optLabel->text() + "(" + ui->label->text() + ")!";
            ui->label->setText(QString::number(factorial(ui->label->text().toUInt())));
            ui->optLabel->setText(expression);
        }
        specialBtnPressed = true;
    }
}

void MainWindow::module()
{   if (! xInNPressed) {
        check();

        if (sign == "") sum = abs(ui->label->text().toDouble());
        else {
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            sum = simpleFunctions(sign, sum, abs(ui->label->text().toDouble()));
        }

        expression = ui->optLabel->text() + "|" + ui->label->text() + "|";
        ui->optLabel->setText(expression);
        ui->label->setText(QString::number(abs(ui->label->text().toDouble())));

        specialBtnPressed = true;
    }
}

void MainWindow::cube()
{
    if (! xInNPressed) {
        check();

        if (sign == "") sum = pow(ui->label->text().toDouble(), 3);  // checking if only one number entered
        else {  // esle getting last entered sign
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            sum = simpleFunctions(sign, sum, pow(ui->label->text().toDouble(), 3));
        }

        if (expression == "") expression = "0";  // if nothing entered setting 0 in expression

        expression = ui->optLabel->text() + "(" + ui->label->text();
        expression += ")³";
        ui->label->setText(QString::number(pow(ui->label->text().toDouble(), 3)));
        ui->optLabel->setText(expression);
        specialBtnPressed = true;
    }
}

void MainWindow::cubeRoot()
{
    if (! xInNPressed) {
        check();

        double temp = abs(ui->label->text().toDouble());
        if (sign == ""){
            if (ui->label->text().toDouble() < 0) {
               sum = -(normalRound(pow(temp, (1.0/3))));  // checking that only one number entered
            }
            else {
               sum = normalRound(pow(temp, (1.0/3)));
            }
        }
        else {  // esle getting last entered sign
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            if (ui->label->text().toDouble() < 0) {
               sum = simpleFunctions(sign, sum, -(normalRound(pow(temp, (1.0/3)))));
            }
            else {
               sum = simpleFunctions(sign, sum, normalRound(pow(temp, (1.0/3))));
            }
        }

        if (expression == "") expression = "0";  // if nothing entered setting 0 in expression

        expression = ui->optLabel->text() + "∛(" + ui->label->text();
        expression += ")";
        if (ui->label->text().toDouble() < 0) {
            ui->label->setText(QString::number(-(normalRound(pow(temp, (1.0/3))))));
            ui->optLabel->setText(expression);
        }
        else {
            ui->label->setText(QString::number(normalRound(pow(temp, (1.0/3)))));
            ui->optLabel->setText(expression);
        }
        specialBtnPressed = true;
    }
}

void MainWindow::tenInN()
{
    if (! xInNPressed) {
        check();

        if (sign == "") sum = pow(10, ui->label->text().toDouble());  // checking if only one number entered
        else {  // esle getting last entered sign
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            sum = simpleFunctions(sign, sum, pow(10, ui->label->text().toDouble()));
        }

        expression = ui->optLabel->text() + "(" + "10^" + ui->label->text() + ")";
        ui->optLabel->setText(expression);
        ui->label->setText(QString::number(pow(10, ui->label->text().toDouble())));

        specialBtnPressed = true;
    }
}

void MainWindow::eInN()
{
    if (! xInNPressed) {
        check();

        if (sign == "") sum = pow(M_E, ui->label->text().toDouble());  // checking if only one number entered
        else {  // esle getting last entered sign
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            sum = simpleFunctions(sign, sum, pow(M_E, ui->label->text().toDouble()));
        }

        expression = ui->optLabel->text() + "(" + "e^" + ui->label->text() + ")";
        ui->optLabel->setText(expression);
        ui->label->setText(QString::number(pow(M_E, ui->label->text().toDouble())));

        specialBtnPressed = true;
    }
}

void MainWindow::twoInN()
{
    if (! xInNPressed) {
        check();

        if (sign == "") sum = pow(2, ui->label->text().toDouble());  // checking if only one number entered
        else {  // esle getting last entered sign
            sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
            sum = simpleFunctions(sign, sum, pow(2, ui->label->text().toDouble()));
        }

        expression = ui->optLabel->text() + "(" + "2^" + ui->label->text() + ")";
        ui->optLabel->setText(expression);
        ui->label->setText(QString::number(pow(2, ui->label->text().toDouble())));

        specialBtnPressed = true;
    }
}

void MainWindow::xInN()
{
    if (!xInNPressed) {
        check();

        xDeg = ui->label->text().toDouble();
        xInNPressed = true;
        f = true;
        expression = ui->optLabel->text() + "(" + ui->label->text() + "^)";
        ui->optLabel->setText(expression);
    }
}

void MainWindow::ln()
{
    if (! xInNPressed) {
        check();

        if (ui->label->text().toDouble() > 0 ) {  // checking for a negaive number in ln
            if (sign == "") sum = log(ui->label->text().toDouble());
            else {
                sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
                sum = simpleFunctions(sign, sum, log(ui->label->text().toDouble()));
            }

            // setting sqrt sign and braces around number
            if (ui->label->text() == "0" && expression != "0") expression += ui->natLogButton->text() + "(0)";
            else {
                expression.insert(expression.length() - ui->label->text().length(), ui->natLogButton->text());
                expression.insert(expression.length() - ui->label->text().length(), "(");
                expression += ")";
            }
            ui->label->setText(QString::number(log(ui->label->text().toDouble())));
            ui->optLabel->setText(expression);
            specialBtnPressed = true;
        } else {
        on_clearButton_clicked();
        ui->label->setText("error");  // setting error text if negative number in ln
    }
    }
}

void MainWindow::lg()
{
    if (! xInNPressed) {
        check();

        if (ui->label->text().toDouble() > 0 ) {  // checking for a negaive number in ln
            if (sign == "") sum = log10(ui->label->text().toDouble());
            else {
                sign = ui->optLabel->text()[ui->optLabel->text().length() - 1];
                sum = simpleFunctions(sign, sum, log10(ui->label->text().toDouble()));
            }

            // setting sqrt sign and braces around number
            if (ui->label->text() == "0" && expression != "0") expression += ui->decLogButton->text() + "(0)";
            else {
                expression.insert(expression.length() - ui->label->text().length(), ui->decLogButton->text());
                expression.insert(expression.length() - ui->label->text().length(), "(");
                expression += ")";
            }
            ui->label->setText(QString::number(log10(ui->label->text().toDouble())));
            ui->optLabel->setText(expression);
            specialBtnPressed = true;
        } else {
        on_clearButton_clicked();
        ui->label->setText("error");  // setting error text if negative number in ln
        }
    }
}

void MainWindow::logX()
{
    check();

    if (ui->label->text().toDouble() > 0)
        xLog = ui->label->text().toDouble();
    else {
        on_clearButton_clicked();
        ui->label->setText("error");
        return;
    }
    logButtonPressed = true;
    f = true;
    expression = ui->optLabel->text() + "(" + ui->label->text() + " log base )";
    ui->optLabel->setText(expression);
}
