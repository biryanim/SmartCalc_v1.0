#include "smart_calc.h"

#include <stdio.h>

int smartCalcWithX(char *expression, char *x_value, double *res) {
  char new_str[2 * INPUT_SIZE] = "";
  size_t expression_size = strlen(expression);
  size_t x_size = strlen(x_value);
  for (size_t i = 0, k = 0; i < expression_size; i++, k++) {
    new_str[k] = expression[i];
    if (expression[i] == 'x') {
      new_str[k++] = '(';
      for (size_t j = 0; j < x_size; j++, k++) new_str[k] = x_value[j];
      new_str[k] = ')';
    }
  }
  return smartCalc(new_str, res);
}

int smartCalc(char *expression, double *res) {
  Token postfix_entry[INPUT_SIZE];
  size_t len = 0;
  int err = 0;
  if (expression == NULL || strlen(expression) == 0 || strlen(expression) > 255)
    err = 1;
  if (!err) {
    err = parser(expression, strlen(expression), postfix_entry, &len);
    if (len == 0 || len > 255) err = 1;
    if (!err) {
      err = calc(postfix_entry, len, res);
    }
  }
  return err;
}

int calc(Token *postfix_entry, size_t size, double *res) {
  int flag = 0;
  Stack_t *head = NULL;
  for (size_t i = 0; i < size && !flag; i++) {
    if (postfix_entry[i].type == NUMBER)
      push(&head, postfix_entry[i]);
    else if (head != NULL) {
      if (postfix_entry[i].type == UNARY)
        computeUnaer(postfix_entry[i].value, &head, &flag);
      else if (postfix_entry[i].type == FUNC)
        computeFunc(postfix_entry[i].value, &head, &flag);
      else if (postfix_entry[i].type == OPERATOR && head->next != NULL)
        computeBin(postfix_entry[i].value, &head, &flag);
      else {
        flag = 1;
      }
    } else {
      flag = 1;
    }
  }
  if (head != NULL)
    if (head->next != NULL) flag = 1;
  if (!flag) {
    Token last = pop(&head);
    *res = last.value;
  }
  clearStack(&head);
  return flag;
}

void computeFunc(double op, Stack_t **head, int *flag) {
  Token num = pop(head);
  if (num.type == NUMBER) {
    if (op == 'c')
      num.value = cos(num.value);
    else if (op == 's')
      num.value = sin(num.value);
    else if (op == 't')
      num.value = tan(num.value);
    else if (op == 'l')
      num.value = log(num.value);
    else if (op == 0)
      num.value = acos(num.value);
    else if (op == 1)
      num.value = asin(num.value);
    else if (op == 2)
      num.value = atan(num.value);
    else if (op == 3)
      num.value = sqrt(num.value);
    else if (op == 4)
      num.value = log10(num.value);
    push(head, num);
  } else
    *flag = 1;
}
void computeBin(double op, Stack_t **head, int *flag) {
  Token second = pop(head), first = pop(head);
  if (first.type == NUMBER && second.type == NUMBER) {
    double res = 0;
    switch ((int)op) {
      case '^':
        res = pow(first.value, second.value);
        break;
      case '*':
        res = first.value * second.value;
        break;
      case '/':
        res = first.value / second.value;
        break;
      case 'm':
        res = fmod(first.value, second.value);
        break;
      case '+':
        res = first.value + second.value;
        break;
      case '-':
        res = first.value - second.value;
        break;
    }
    first.value = res;
    push(head, first);
  } else
    *flag = 1;
}

void computeUnaer(double op, Stack_t **head, int *flag) {
  Token a = pop(head);
  if (a.type == NUMBER) {
    if (op == '+')
      push(head, a);
    else {
      a.value *= -1;
      push(head, a);
    }
  } else
    *flag = 1;
}