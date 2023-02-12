/*
Działania z kolejkami (FIFO)
*/
struct Item {
  float value;
  struct Item *next;
};
struct Item *temp;

void insert(float item);

void remov();

void display();

#include <stdio.h>
#include <stdlib.h>

void main(void) {
  // realizacja
  float item;
  int choice;
  while (choice != 4) {
    printf("\n1. Insert\n2. Remove\n3. Display\n4. Exit\n\n");
    printf("Podaj wybor:");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Podaj liczbe: ");
      scanf("%f", &item);
      insert(item);
      break;
    case 2:
      remov();
      break;
    case 3:
      display();
      break;
    case 4:
      break;
    default:
      printf("wprowadz liczba pomiedzy 1-4\n");
      break;
    }
  }
  return;
}

// Funkcii

void insert(float item) {
  struct Item *pointer = (struct Item *)malloc(sizeof(struct Item));
  if (pointer == NULL) {
    printf("Stack overflow");
  } else {
    if (temp == NULL) {
      pointer->value = item;
      pointer->next = NULL;
      temp = pointer;
    } else {
      pointer->value = item;
      pointer->next = temp;
      temp = pointer;
    }
  }
}

void remov() {
  float item;
  struct node *pointer;
  if (temp == NULL) {
    printf("Stack Underflow\n");
  } else {
    item = temp->value;
    pointer = temp;
    temp = temp->next;
    free(pointer);
    printf("Usunieta liczba jest %f\n", item);
  }
}

void display() {
  int i;
  struct Item *pointer;
  pointer = temp;
  if (pointer == NULL) {
    printf("Stack underflow\n");
  } else {
    printf("Elementy kolejki sa\n");
    while (pointer != NULL) {
      printf("%f\n", pointer->value);
      pointer = pointer->next;
    }
  }
}
