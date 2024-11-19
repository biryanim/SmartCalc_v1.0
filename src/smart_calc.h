#ifdef __cplusplus
extern "C" {
#endif

#ifndef S21_SMART_CALC_V1_0_H
#define S21_SMART_CALC_V1_0_H

#include <math.h>

#include "stack.h"
#include "to_polish_notation.h"

#define INPUT_SIZE 256

int smartCalcWithX(char *expression, char *x_value, double *res);
int smartCalc(char *expression, double *res);
int calc(Token *postfix_entry, size_t size, double *res);
void computeBin(double op, Stack_t **head, int *flag);
void computeFunc(double op, Stack_t **head, int *flag);
void computeUnaer(double op, Stack_t **head, int *flag);
#endif

#ifdef __cplusplus
}
#endif
