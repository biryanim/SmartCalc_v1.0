#ifndef S21_SMART_CALC_V1_0_STACK_H
#define S21_SMART_CALC_V1_0_STACK_H

#include <stdlib.h>

typedef enum { NUMBER = 1, OPERATOR, FUNC, UNARY } type_of_tokens;

typedef struct {
  double value;
  int priority;
  type_of_tokens type;
} Token;

typedef struct stack_tag {
  Token token;
  struct stack_tag *next;
} Stack_t;

void push(Stack_t **head, Token op);
Token pop(Stack_t **head);
Token peek(const Stack_t *head);
void clearStack(Stack_t **head);

#endif
