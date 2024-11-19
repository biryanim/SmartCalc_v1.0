#ifndef S21_SMART_CALC_V1_0_TO_POLISH_NOTATION_H
#define S21_SMART_CALC_V1_0_TO_POLISH_NOTATION_H

#include <string.h>

#include "stack.h"

int parser(char *expression, size_t size, Token *postfix_entry, size_t *len);
void stackOfOperators(Token op, Stack_t **head, Token *postfix_entry, size_t *j,
                      int *flag);
int IsItNumber(char a, int *counts_of_dot);
int IsItUnaryOp(char *expression, Token *support, size_t i, int *op);
int IsItBinOp(char *expression, Token *support, size_t *j, int *op);
int IsItFunctions(char *expression, Token *support, size_t *i);

#endif
