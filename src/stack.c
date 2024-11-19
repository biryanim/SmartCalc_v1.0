#include "stack.h"

void push(Stack_t **head, Token op) {
  Stack_t *tmp = malloc(sizeof(Stack_t));
  if (tmp == NULL) {
    exit(1);
  }
  tmp->next = *head;
  tmp->token = op;
  *head = tmp;
}

Token pop(Stack_t **head) {
  Stack_t *out;
  Token a;
  if (*head == NULL) {
    exit(1);
  }
  out = *head;
  a = out->token;
  *head = (*head)->next;
  free(out);
  return a;
}

Token peek(const Stack_t *head) {
  Token a;
  if (head == NULL) {
    exit(1);
  }
  a = head->token;
  return a;
}

void clearStack(Stack_t **head) {
  while (*head != NULL) pop(head);
}