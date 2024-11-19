#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(input_numbers()));
  connect(ui->push_plus, SIGNAL(clicked()), this, SLOT(input_operations()));
  connect(ui->push_minus, SIGNAL(clicked()), this, SLOT(input_operations()));
  connect(ui->push_mult, SIGNAL(clicked()), this, SLOT(input_operations()));
  connect(ui->push_div, SIGNAL(clicked()), this, SLOT(input_operations()));
  connect(ui->push_LB, SIGNAL(clicked()), this, SLOT(input_operations()));
  connect(ui->push_RB, SIGNAL(clicked()), this, SLOT(input_operations()));
  connect(ui->push_deg, SIGNAL(clicked()), this, SLOT(input_operations()));
  connect(ui->push_mod, SIGNAL(clicked()), this, SLOT(input_operations()));
  connect(ui->push_sqrt, SIGNAL(clicked()), this, SLOT(input_functions()));
  connect(ui->push_cos, SIGNAL(clicked()), this, SLOT(input_functions()));
  connect(ui->push_sin, SIGNAL(clicked()), this, SLOT(input_functions()));
  connect(ui->push_tan, SIGNAL(clicked()), this, SLOT(input_functions()));
  connect(ui->push_acos, SIGNAL(clicked()), this, SLOT(input_functions()));
  connect(ui->push_asin, SIGNAL(clicked()), this, SLOT(input_functions()));
  connect(ui->push_atan, SIGNAL(clicked()), this, SLOT(input_functions()));
  connect(ui->push_ln, SIGNAL(clicked()), this, SLOT(input_functions()));
  connect(ui->push_log, SIGNAL(clicked()), this, SLOT(input_functions()));
  setValidator();
  setGraph();
}

void MainWindow::setValidator() {
  QRegularExpression r1("^(\\-?)([1-9][0-9]{0,5}|1000000|0)(\\.)[0-9]{3}");
  QRegularExpression r2("^([1-9][0-9]{0,7}|100000000|0)");
  QRegularExpression r3("([1-9][0-9])|([1-5][0-9]{0,2}|600)");
  QRegularExpression r4("([1-9][0-9]{0,2})");
  ui->LineEdit_X->setValidator(new QRegularExpressionValidator(r1, this));
  ui->LineEdit_x_min->setValidator(new QRegularExpressionValidator(r1, this));
  ui->LineEdit_x_max->setValidator(new QRegularExpressionValidator(r1, this));
  ui->LineEdit_y_min->setValidator(new QRegularExpressionValidator(r1, this));
  ui->LineEdit_y_max->setValidator(new QRegularExpressionValidator(r1, this));
  ui->lineEdit_loan_amount->setValidator(
      new QRegularExpressionValidator(r2, this));
  ui->lineEdit_term->setValidator(new QRegularExpressionValidator(r3, this));
  ui->lineEdit_rate->setValidator(new QRegularExpressionValidator(r4, this));
}

void MainWindow::setGraph() {
  ui->widget->setBackground(QColor("#5f6368"));
  ui->widget->yAxis->setTickLabelColor(QColor(Qt::white));
  ui->widget->xAxis->setTickLabelColor(QColor(Qt::white));
  ui->widget->xAxis->setLabelColor("white");
  ui->widget->yAxis->setLabelColor("white");
  ui->radioButton_annuity->setChecked(true);
  ui->widget->xAxis->setLabel("x");
  ui->widget->yAxis->setLabel("y");
}

bool MainWindow::valid(int clicked) {
  bool flag = false;
  switch (clicked) {
    case NUM:
      if ((last_token != X_INPUT && prev_op != ')') || last_token == 0) {
        flag = true;
        last_token = NUM;
        prev_op = '\0';
      }
      cur_op = '\0';
      break;
    case OPER:
      if (prev_op == '\0' || last_token == X_INPUT || last_token == 0)
        flag = true;
      else if (prev_op == ')' || cur_op == '(' || cur_op == ')' ||
               last_token == X_INPUT)
        flag = true;
      else if ((prev_op != '-' && prev_op != '+') &&
               (cur_op == '+' || cur_op == '-'))
        flag = true;
      else
        flag = false;
      count_of_dots = 0;
      last_token = OPER;
      break;
    case FUNCTION:
      flag = true;
      count_of_dots = 0;
      prev_op = '\0';
      cur_op = '\0';
      last_token = FUNCTION;
      break;
    case DOT:
      if (count_of_dots < 1 && last_token != X_INPUT) {
        flag = true;
        last_token = DOT;
      }
      count_of_dots++;

      break;
    case X_INPUT:
      if (last_token != X_INPUT && last_token != NUM && last_token != DOT)
        flag = true;
      last_token = X_INPUT;
      break;
  }
  return flag;
}

MainWindow::~MainWindow() { delete ui; }

QString MainWindow::start(QString button_text) {
  if (ui->input_field->text().compare("Error") == 0 ||
      ui->input_field->text().compare("Infinity") == 0)
    ui->input_field->setText("0");
  return (ui->input_field->text() == "0")
             ? button_text
             : ui->input_field->text() + button_text;
}

void MainWindow::input_numbers() {
  if (valid(NUM)) {
    QPushButton *button = (QPushButton *)sender();
    ui->input_field->setText(start(button->text()));
  }
}

void MainWindow::input_operations() {
  QPushButton *button = (QPushButton *)sender();
  cur_op = (button->text())[0];
  if (valid(OPER)) {
    if (button->text().compare("+") == 0 || button->text().compare("-") == 0 ||
        button->text().compare("(") == 0 || button->text().compare(")") == 0)
      ui->input_field->setText(start(button->text()));
    else {
      if (ui->input_field->text().compare("Error") == 0 ||
          ui->input_field->text().compare("Infinity") == 0)
        ui->input_field->setText("0");
      ui->input_field->setText(ui->input_field->text() + button->text());
    }
    prev_op = cur_op;
  }
}

void MainWindow::input_functions() {
  if (valid(FUNCTION)) {
    QPushButton *button = (QPushButton *)sender();
    ui->input_field->setText(start(button->text()) + "(");
  }
}

void MainWindow::on_pushButton_dot_clicked() {
  if (valid(DOT)) {
    if (ui->input_field->text().compare("Error") == 0 ||
        ui->input_field->text().compare("Infinity") == 0)
      ui->input_field->setText("0");
    ui->input_field->setText(ui->input_field->text() + ".");
  }
}

void MainWindow::on_pushButton_eq_clicked() {
  double res = 0;
  int err;
  bool flag = true;
  if (ui->input_field->text().contains('x')) {
    if (ui->LineEdit_X->text().isEmpty()) {
      ui->error_field->setText("Input value");
      flag = false;
    } else {
      ui->error_field->setText("");
      err = smartCalcWithX(ui->input_field->text().toLocal8Bit().data(),
                           ui->LineEdit_X->text().toLocal8Bit().data(), &res);
    }
  } else {
    err = smartCalc(ui->input_field->text().toLocal8Bit().data(), &res);
  }
  if (flag) {
    if (err)
      ui->input_field->setText("Error");
    else if (res == INFINITY)
      ui->input_field->setText("Infinity");
    else if (res != res)
      ui->input_field->setText("Error");
    else {
      QString res_label = QString::number(res, 'g', 15);
      ui->input_field->setText(res_label);
    }
  }
  last_token = 0;
}

void MainWindow::on_pushButton_CE_clicked() {
  ui->input_field->setText("0");
  last_token = 0;
  count_of_dots = 0;
}

void MainWindow::on_pushButton_x_clicked() {
  if (valid(X_INPUT)) {
    QPushButton *button = (QPushButton *)sender();
    ui->input_field->setText(start(button->text()));
  }
}

bool MainWindow::checkInputGraph() {
  bool flag = true;
  if (ui->LineEdit_x_min->text().isEmpty()) {
    ui->error_field->setText("input X min");
    flag = false;
  } else if (ui->LineEdit_x_max->text().isEmpty()) {
    ui->error_field->setText("input X max");
    flag = false;
  } else if (flag && ui->LineEdit_y_min->text().isEmpty()) {
    ui->error_field->setText("input Y min");
    flag = false;
  } else if (flag && ui->LineEdit_y_max->text().isEmpty()) {
    ui->error_field->setText("input Y max");
    flag = false;
  } else
    ui->error_field->setText("");

  if (flag) {
    if (ui->LineEdit_x_min->text().toDouble() >
        ui->LineEdit_x_max->text().toDouble()) {
      double tmp = ui->LineEdit_x_min->text().toDouble();
      ui->LineEdit_x_min->setText(
          QString::number(ui->LineEdit_x_max->text().toDouble(), 'g', 15));
      ui->LineEdit_x_max->setText(QString::number(tmp, 'g', 15));
    }
    if (ui->LineEdit_y_min->text().toDouble() >
        ui->LineEdit_y_max->text().toDouble()) {
      double tmp = ui->LineEdit_y_min->text().toDouble();
      ui->LineEdit_y_min->setText(
          QString::number(ui->LineEdit_y_max->text().toDouble(), 'g', 15));
      ui->LineEdit_y_max->setText(QString::number(tmp, 'g', 15));
    }
  }
  return flag;
}

void MainWindow::on_pushButton_clicked() {
  ui->widget->clearGraphs();
  if (checkInputGraph()) {
    ui->widget->clearGraphs();
    double xBegin, xEnd, yBegin, yEnd;
    QVector<double> x, y;
    double h = 0.05;
    xBegin = (ui->LineEdit_x_min->text()).toDouble();
    xEnd = (ui->LineEdit_x_max->text()).toDouble();
    yBegin = (ui->LineEdit_y_min->text()).toDouble();
    yEnd = (ui->LineEdit_y_max->text()).toDouble();

    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(yBegin, yEnd);
    double res;
    int flag = 0;
    for (double X = xBegin; X <= xEnd && !flag; X += h) {
      x.push_back(X);
      if (!(QString::number(X, 'g', 6).contains('e')))
        flag = smartCalcWithX(ui->input_field->text().toLocal8Bit().data(),
                              QString::number(X, 'g', 7).toLocal8Bit().data(),
                              &res);
      else
        flag = smartCalcWithX(ui->input_field->text().toLocal8Bit().data(),
                              QString::number(0).toLocal8Bit().data(), &res);
      if (res != res)
        y.push_back(qQNaN());
      else
        y.push_back(res);
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->setPen(QPen(QColor("#8ab4f8")));
    ui->widget->graph(0)->addData(x, y);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui->widget->graph(0)->setScatterStyle(
        QCPScatterStyle(QCPScatterStyle::ssDisc, 2));
    ui->widget->replot();
    x.clear();
    y.clear();
  }
}

bool MainWindow::checkInput() {
  bool flag = true;
  if (ui->lineEdit_loan_amount->text().isEmpty()) {
    ui->label_err_amount->setText("input amount");
    flag = false;
  } else
    ui->label_err_amount->setText("");
  if (ui->lineEdit_term->text().isEmpty()) {
    ui->label_err_term->setText("input term");
    flag = false;
  } else
    ui->label_err_term->setText("");
  if (ui->lineEdit_rate->text().isEmpty()) {
    ui->label_err_rate->setText("input rate");
    flag = false;
  } else
    ui->label_err_rate->setText("");
  return flag;
}

void MainWindow::on_pushButton_21_clicked() {
  ui->textEdit_output->setText("");
  if (checkInput()) {
    CreditInfo credit;
    credit.Amount = (ui->lineEdit_loan_amount->text()).toDouble();
    credit.Term = (ui->lineEdit_term->text()).toDouble();
    credit.Rate = (ui->lineEdit_rate->text()).toDouble();
    double monthlyPayment[1024] = {0};
    double overpayment, totalPayout;
    if (ui->radioButton_annuity->isChecked()) {
      creditCalcAn(credit, &monthlyPayment[0], &overpayment, &totalPayout);
      QString str = QString::number(monthlyPayment[0], 'g', 7);
      ui->textEdit_output->setText(str);
    } else {
      creditCalcDiff(credit, monthlyPayment, &overpayment, &totalPayout);
      for (int i = 0; i < credit.Term; i++) {
        QString str = QString::number(i + 1) + "\t" +
                      QString::number(monthlyPayment[i], 'g', 7) + "\n";
        ui->textEdit_output->setText(ui->textEdit_output->toPlainText() + str);
      }
    }
    ui->label_over->setText(QString::number(overpayment, 'g', 7));
    ui->label_payout->setText(QString::number(totalPayout, 'g', 7));
  }
}
