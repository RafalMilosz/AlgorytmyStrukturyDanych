/*
Stos
*/
struct Item {
  int value;
  struct Item *next;
};

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Item *newNode(int data);

int isEmpty(struct Item *root);

void push(struct Item **root, int data);

int pop(struct Item **root);

int peek(struct Item *root);

void makeNull(struct Item **root);

void makeNull(struct Item **root) {
  struct Item *temp, *current = *root;
  while (current) {
    temp = current->next;
    free(current);
    current = temp;
  }
  *root = NULL;
}

int main() {
  struct Item *root = NULL;

  push(&root, 10);
  push(&root, 20);
  push(&root, 30);

  printf("%d popped from stack\n", pop(&root));

  printf("Top element is %d\n", peek(root));

  makeNull(&root);

  printf(isEmpty(root) != 0 ? "Stack is empty\n" : "Stack is not empty\n");

  return 0;
}

struct Item *newNode(int data) {
  struct Item *stackNode = (struct Item *)malloc(sizeof(struct Item));
  stackNode->value = data;
  stackNode->next = NULL;
  return stackNode;
}

int isEmpty(struct Item *root) { return !root; }

void push(struct Item **root, int data) {
  struct Item *stackNode = newNode(data);
  stackNode->next = *root;
  *root = stackNode;
  printf("%d pushed to stack\n", data);
}

int pop(struct Item **root) {
  if (isEmpty(*root))
    return INT_MIN;
  struct Item *temp = *root;
  *root = (*root)->next;
  int popped = temp->value;
  free(temp);

  return popped;
}

int peek(struct Item *root) {
  if (isEmpty(root))
    return INT_MIN;
  return root->value;
}
