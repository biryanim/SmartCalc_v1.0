#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDoubleValidator>
#include <QLineEdit>
#include <QMainWindow>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QVector>

#include "../credit.h"
#include "../smart_calc.h"

#define DOT 1
#define NUM 2
#define OPER 3
#define FUNCTION 4
#define X_INPUT 5

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
  int count_of_dots{0};
  int last_token{0};
  QChar prev_op = '\0';
  QChar cur_op = '\0';

 private slots:
  void setValidator();
  void setGraph();
  bool checkInputGraph();
  bool valid(int clicked);
  void input_numbers();
  QString start(QString button_text);
  void input_operations();
  void input_functions();
  void on_pushButton_dot_clicked();
  void on_pushButton_eq_clicked();
  void on_pushButton_CE_clicked();
  void on_pushButton_x_clicked();
  void on_pushButton_clicked();
  void on_pushButton_21_clicked();
  bool checkInput();
};
#endif  // MAINWINDOW_H
