#include "to_polish_notation.h"

#include <stdio.h>

int parser(char *expression, size_t size, Token *postfix_entry, size_t *len) {
  Stack_t *head = NULL;
  int op = 0, flag = 0, counts_of_dot = 0;
  Token support;
  size_t j = 0;
  for (size_t i = 0; i < size && !flag; i++) {
    if (IsItNumber(expression[i], &counts_of_dot) && counts_of_dot <= 1) {
      sscanf(&expression[i], "%lf", &postfix_entry[j].value);
      postfix_entry[j++].type = NUMBER;
      while (IsItNumber(expression[++i], &counts_of_dot)) {
        if (counts_of_dot > 1) flag = 1;
        continue;
      }
      i--;
      op = 0;
    } else if (IsItUnaryOp(&expression[i], &support, i, &op) ||
               IsItBinOp(&expression[i], &support, &i, &op) ||
               IsItFunctions(&expression[i], &support, &i)) {
      stackOfOperators(support, &head, postfix_entry, &j, &flag);
      counts_of_dot = 0;
    } else {
      flag = 1;
    }
  }
  while (head != NULL) {
    postfix_entry[j++] = pop(&head);
  }
  if (!flag) *len = j;
  return flag;
}

void stackOfOperators(Token op, Stack_t **head, Token *postfix_entry, size_t *j,
                      int *flag) {
  if ((*head == NULL || op.value == '(') && op.value != ')') {
    push(head, op);
  } else if (op.value == ')') {
    if (*head != NULL) {
      Token cur = peek(*head);
      while ((*head)->next != NULL && (char)cur.value != '(') {
        postfix_entry[*j] = pop(head);
        *j = *j + 1;
        cur = peek(*head);
      }
      if ((char)cur.value == '(')
        pop(head);
      else
        *flag = 1;
    } else {
      *flag = 1;
    }
  } else {
    if (*head != NULL) {
      Token cur = peek(*head);
      while (*head != NULL && (char)cur.value != '(' &&
             cur.priority <= op.priority) {
        cur = pop(head);
        postfix_entry[*j] = cur;
        *j = *j + 1;
        if (*head != NULL) cur = peek(*head);
      }
    }
    push(head, op);
  }
}

int IsItNumber(char a, int *counts_of_dot) {
  int flag = 0;
  if (('0' <= a && '9' >= a) || a == '.') flag = 1;
  if (a == '.') *counts_of_dot = *counts_of_dot + 1;
  return flag;
}

int IsItUnaryOp(char *expression, Token *support, size_t i, int *op) {
  int flag = 0;
  switch (*expression) {
    case '+':
    case '-':
      if (i == 0 || (i > 0 && *op && *op != ')')) {
        support->type = UNARY;
        support->priority = 4;
        flag = 1;
        support->value = *expression;
      }
  }
  return flag;
}

int IsItBinOp(char *expression, Token *support, size_t *i, int *op) {
  int flag = 0;
  support->type = OPERATOR;
  switch (*expression) {
    case '(':
    case ')':
      flag = 1;
      support->priority = 1;
      break;
    case '^':
      flag = 1;
      support->priority = 3;
      break;
    case '*':
    case '/':
      flag = 1;
      support->priority = 5;
      break;
    case 'm':
      if (strncmp(expression, "mod", 3) == 0) {
        *i = *i + 2;
        flag = 1;
        support->priority = 5;
      }
      break;
    case '+':
    case '-':
      flag = 1;
      support->priority = 6;
      break;
  }
  if (flag) {
    support->value = *expression;
    *op = *expression;
  }
  return flag;
}

int IsItFunctions(char *expression, Token *support, size_t *i) {
  char func[][4] = {"acos", "asin", "atan"};
  int flag = 0;
  support->priority = 2;
  switch (*expression) {
    case 'a':
      for (int k = 0; k < 3 && flag == 0; k++)
        if (strncmp(expression, func[k], 4) == 0) {
          *i = *i + 3;
          support->value = k;
          flag = 1;
        }
      break;
    case 's':
      if (strncmp(expression, "sin", 3) == 0) {
        *i = *i + 2;
        support->value = *expression;
        flag = 1;
      } else if (strncmp(expression, "sqrt", 4) == 0) {
        *i = *i + 3;
        support->value = 3;
        flag = 1;
      }
      break;
    case 'l':
      if (strncmp(expression, "log", 3) == 0) {
        *i = *i + 2;
        support->value = 4;
        flag = 1;
      } else if (strncmp(expression, "ln", 2) == 0) {
        *i = *i + 1;
        support->value = *expression;
        flag = 1;
      }
      break;
    case 'c':
    case 't':
      if (strncmp(expression, "tan", 3) == 0 ||
          strncmp(expression, "cos", 3) == 0) {
        *i = *i + 2;
        support->value = *expression;
        flag = 1;
      }
      break;
  }
  if (flag) support->type = FUNC;
  return flag;
}