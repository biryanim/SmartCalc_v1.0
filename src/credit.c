#include "credit.h"

#include <stdio.h>

void creditCalcAn(CreditInfo credit, double *monthlyPayment,
                  double *overpayment, double *totalPayout) {
  double monthRate = credit.Rate / 12. / 100.;
  *monthlyPayment = credit.Amount * monthRate *
                    pow(1 + monthRate, credit.Term) /
                    (pow(1 + monthRate, credit.Term) - 1);
  *totalPayout = *monthlyPayment * credit.Term;
  *overpayment = *totalPayout - credit.Amount;
}

void creditCalcDiff(CreditInfo credit, double *monthlyPayment,
                    double *overpayment, double *totalPayout) {
  time_t cur_time = time(NULL);
  *totalPayout = 0;
  struct tm *timeInfo = localtime(&cur_time);
  double monthly_payment_on_the_main_debt = credit.Amount / credit.Term;
  int cur_month = timeInfo->tm_mon + 1;
  int cur_year = timeInfo->tm_year + 1900;
  int days_per_month;
  int days_per_year;
  double sum = credit.Amount;
  for (int i = 0; i < credit.Term; i++) {
    int month = cur_month + i;
    if (isLeapYear(cur_year))
      days_per_year = 366;
    else
      days_per_year = 365;
    defMonth(month, &days_per_month, &cur_year);
    double for_percent =
        ((sum * (credit.Rate / 100) * days_per_month) / days_per_year);
    sum = sum - monthly_payment_on_the_main_debt;
    monthlyPayment[i] = monthly_payment_on_the_main_debt + for_percent;
    *totalPayout += monthlyPayment[i];
  }
  *overpayment = *totalPayout - credit.Amount;
}

void defMonth(int cur_month, int *days_per_month, int *cur_year) {
  if (cur_month % 12 == JANUARY)
    *days_per_month = 31;
  else if (cur_month % 12 == FEBRUARY)
    *days_per_month = isLeapYear(*cur_year) ? 29 : 28;
  else if (cur_month % 12 == MARCH)
    *days_per_month = 31;
  else if (cur_month % 12 == APRIL)
    *days_per_month = 30;
  else if (cur_month % 12 == MAY)
    *days_per_month = 31;
  else if (cur_month % 12 == JUNE)
    *days_per_month = 30;
  else if (cur_month % 12 == JULY)
    *days_per_month = 31;
  else if (cur_month % 12 == AUGUST)
    *days_per_month = 31;
  else if (cur_month % 12 == SEPTEMBER)
    *days_per_month = 30;
  else if (cur_month % 12 == OCTOBER)
    *days_per_month = 31;
  else if (cur_month % 12 == NOVEMBER)
    *days_per_month = 30;
  else if (cur_month % 12 == DECEMBER) {
    *days_per_month = 31;
    *cur_year = *cur_year + 1;
  }
}

int isLeapYear(int year) {
  int flag = 1;
  if (year % 4 == 0) {
    if (year % 100 == 0)
      if (year % 400 == 0)
        flag = 1;
      else
        flag = 0;
    else
      flag = 1;
  } else {
    flag = 0;
  }
  return flag;
}