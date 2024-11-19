#include <check.h>
#include <stdio.h>

#include "credit.h"
#include "smart_calc.h"

#define TEST_EPS 10e-7
#define TEST_EPS_CREDIT 10e-1

START_TEST(val_test1) {
  char *str = "((cos(x)+0.853))";
  int err = 0;
  double res = 0;
  char *x = "1";
  double right = 1.3933023058681397;
  err = smartCalcWithX(str, x, &res);

  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(res, right, TEST_EPS);
}
END_TEST

START_TEST(val_test2) {
  char str[] = "((css(1)+0.853))";
  int err = 0;
  double res;
  err = smartCalc(str, &res);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test3) {
  char str[] = "((cos(1)+0.853)))";
  double res;
  int err = smartCalc(str, &res);

  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test4) {
  char *str = "((sin(1)+0.853))";
  double res = 0;
  double right = 1.6944709848078965;
  int err = smartCalc(str, &res);

  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(res, right, TEST_EPS);
}
END_TEST

START_TEST(val_test5) {
  char str[] = "+((cos(log(-1+777.777)+.853)-865.))";
  double res = 0;
  double right = -865.824372433783;
  int err = smartCalc(str, &res);

  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(res, right, TEST_EPS);
}
END_TEST

START_TEST(val_test6) {
  char str[] = "+((cos(log(-1/.777.777)+.853)-865.))";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test7) {
  char str[] = "+((asin((ln(+.1^.777777)+5)mod2-1)-865.))";
  double res = 0;
  double right = -864.7893431503167;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(res, right, TEST_EPS);
}
END_TEST

START_TEST(val_test8) {
  char str[] = "sqrt((6^atan(9))*9)";
  double res = 0;
  double right = 11.097516262125971;
  int err = smartCalc(str, &res);

  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(res, right, TEST_EPS);
}
END_TEST

START_TEST(val_test9) {
  char str[] = "sqrt((6^atan())*9)";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test10) {
  char str[] = "((css(1)+  0.853))";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test11) {
  char str[] = "(6+3)(7-9)";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test12) {
  char str[] = "tan(6)";
  double res = 0;
  double right = -0.29100619138474915;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(res, right, TEST_EPS);
}
END_TEST

START_TEST(val_test13) {
  char str[] = "sqrt)6)";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test14) {
  char str[] = "*sqrt(6)";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test15) {
  char str[] = "sqrt(6)mod";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(val_test16) {
  char str[] = "acos(sin(3))";
  double res = 0;
  double right = 1.4292036732051034;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(res, right, TEST_EPS);
}
END_TEST

START_TEST(test17) {
  char str[] =
      "15.4121212121212/(7.1-(1.1+1.1))*3-(2+(1+1))*15.4/"
      "(7-(200.1+1))*3-(2+(1+1))*(15.0/"
      "(7-(1.1+1))*3.4-(2+(1+1))+15.23456789101112/(7.5-(1+1))*3.5-(2+(1+1)))";
  double right = 15.4121212121212 / (7.1 - (1.1 + 1.1)) * 3 -
                 (2 + (1 + 1)) * 15.4 / (7 - (200.1 + 1)) * 3 -
                 (2 + (1 + 1)) * (15.0 / (7 - (1.1 + 1)) * 3.4 - (2 + (1 + 1)) +
                                  15.23456789101112 / (7.5 - (1 + 1)) * 3.5 -
                                  (2 + (1 + 1)));
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test18) {
  char *expressions[] = {"1/0.1.1", "6 +",  "8+(9",     "(3+3)sin(3)", "abc",
                         ")",       "5**5", "sin(sin)", "2^^2",        "()"};
  for (int i = 0; i < 10; i++) {
    double res;
    int err = smartCalc(expressions[i], &res);
    ck_assert_int_eq(1, err);
  }
}
END_TEST

START_TEST(test19) {
  char str[] = "2^(2.1+1)-11mod2";
  double right = pow(2, (2.1 + 1)) - fmod(11, 2);
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(0, err);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test20) {
  char str[] = "sin(0.5)-cos(1)+tan(0.5)+acos(0.5)-asin(1)-atan(1)";
  double right = sin(0.5) - cos(1) + tan(0.5) + acos(0.5) - asin(1) - atan(1);
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(0, err);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test21) {
  char str[] = "sqrt(4.123456789)+3-1.12";
  double right = sqrt(4.123456789) + 3 - 1.12;
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(0, err);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test22) {
  char str[] = "log(+10.2)-ln(10.2)";
  double right = log10(10.2) - log(10.2);
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(0, err);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test23) {
  char str[] = "11+(-2)^5";
  double right = 11 + pow(-2, 5);
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(0, err);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test24) {
  char str[] = "sqrt(+4+1)+(-3+1)";
  double right = sqrt(4 + 1) + (-3 + 1);
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(0, err);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test25) {
  char str[] = "sqrt(3+1)-(-3+1)";
  double right = sqrt(3 + 1) - (-3 + 1);
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(0, err);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test26) {
  char str[] = "+1.1122-(-1)";
  double right = +1.1122 - (-1);
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(0, err);
  ck_assert_double_eq_tol(right, res, TEST_EPS);
}
END_TEST

START_TEST(test27) {
  char str[] = "2^(2.1+1)-11mid2";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(1, err);
}
END_TEST

START_TEST(test28) {
  char str[] = "2^(2.1+1)+(";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(1, err);
}
END_TEST

START_TEST(test29) {
  char str[] = "2^(2.1+1)+()";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(1, err);
}
END_TEST

START_TEST(test30) {
  char str[] = "modasin(mod)";
  double res;
  int err = smartCalc(str, &res);
  ck_assert_int_eq(1, err);
}
END_TEST

START_TEST(test_credit1) {
  CreditInfo credit;
  credit.Amount = 300000;
  credit.Term = 12;
  credit.Rate = 21;
  double monthlyPayment, overpayment, totalPayout;
  creditCalcAn(credit, &monthlyPayment, &overpayment, &totalPayout);

  ck_assert_double_eq_tol(monthlyPayment, 27934.13, TEST_EPS_CREDIT);
  ck_assert_double_eq_tol(overpayment, 35209.56, TEST_EPS_CREDIT);
  ck_assert_double_eq_tol(totalPayout, 335209.56, TEST_EPS_CREDIT);
}
END_TEST

START_TEST(test_credit2) {
  CreditInfo credit;
  credit.Amount = 300000;
  credit.Term = 12;
  credit.Rate = 21;
  double monthlyPayment[1024] = {0};
  double overpayment, totalPayout;
  creditCalcDiff(credit, monthlyPayment, &overpayment, &totalPayout);
  ck_assert_double_eq_tol(overpayment, 33968.4, TEST_EPS_CREDIT);
  ck_assert_double_eq_tol(totalPayout, 333968.4, TEST_EPS_CREDIT);
}
END_TEST

Suite *test_credit_calc(void) {
  Suite *suite = suite_create("=== CREDIT CALC TEST ===");
  TCase *tc = tcase_create("tc");

  tcase_add_test(tc, test_credit1);
  tcase_add_test(tc, test_credit2);

  suite_add_tcase(suite, tc);

  return suite;
}

Suite *test_calc(void) {
  Suite *suite = suite_create("=== CALC  TEST ===");
  TCase *tc = tcase_create("tc");

  tcase_add_test(tc, val_test1);
  tcase_add_test(tc, val_test2);
  tcase_add_test(tc, val_test3);
  tcase_add_test(tc, val_test4);
  tcase_add_test(tc, val_test5);
  tcase_add_test(tc, val_test6);
  tcase_add_test(tc, val_test7);
  tcase_add_test(tc, val_test8);
  tcase_add_test(tc, val_test9);
  tcase_add_test(tc, val_test10);
  tcase_add_test(tc, val_test11);
  tcase_add_test(tc, val_test12);
  tcase_add_test(tc, val_test13);
  tcase_add_test(tc, val_test14);
  tcase_add_test(tc, val_test15);
  tcase_add_test(tc, val_test16);
  tcase_add_test(tc, test17);
  tcase_add_test(tc, test18);
  tcase_add_test(tc, test19);
  tcase_add_test(tc, test20);
  tcase_add_test(tc, test21);
  tcase_add_test(tc, test22);
  tcase_add_test(tc, test23);
  tcase_add_test(tc, test24);
  tcase_add_test(tc, test25);
  tcase_add_test(tc, test26);
  tcase_add_test(tc, test27);
  tcase_add_test(tc, test28);
  tcase_add_test(tc, test29);
  tcase_add_test(tc, test30);

  suite_add_tcase(suite, tc);

  return suite;
}

int main(void) {
  int failed = 0;
  Suite *tests[] = {test_calc(), test_credit_calc(), NULL};
  for (int i = 0; tests[i] != NULL; i++) {
    SRunner *sr = srunner_create(tests[i]);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_VERBOSE);

    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("========= FAILED: %d =========\n", failed);

  return failed == 0 ? 0 : 1;
}