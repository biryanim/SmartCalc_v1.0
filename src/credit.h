#ifdef __cplusplus
extern "C" {
#endif

#ifndef CREDIT_H
#define CREDIT_H

#include <math.h>
#include <time.h>

typedef struct {
  double Amount;  //общая сумма кредита
  int Term;       //срок
  double Rate;    //процентная ставка
} CreditInfo;

typedef enum {
  DECEMBER = 0,
  JANUARY = 1,
  FEBRUARY,
  MARCH,
  APRIL,
  MAY,
  JUNE,
  JULY,
  AUGUST,
  SEPTEMBER,
  OCTOBER,
  NOVEMBER
} MONTH;

void creditCalcAn(CreditInfo credit, double *monthlyPayment,
                  double *overpayment, double *totalPayout);
void creditCalcDiff(CreditInfo credit, double *monthlyPayment,
                    double *overpayment, double *totalPayout);
int isLeapYear(int year);
void defMonth(int cur_month, int *days_per_month, int *year);

#endif

#ifdef __cplusplus
}
#endif
