/*
Nazwa pliku: main.c
Autor: Rafał Miłosz
Data: 2023-02-15
Opis: Algorytm wyznaczania liczb względnie pierwszych. Algorytm podziału łańcucha na słowa. Algorytm usuwania wybranego elementu listy jednokierunkowej.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void relatively_prime_in_range(int a, int b, int p) {
  bool is_relatively_prime[b - a + 1];
  for (int i = 0; i <= b - a; i++) {
    is_relatively_prime[i] = true;
  }

  for (int i = p; i <= b; i += p) {
    if (i >= a) {
      is_relatively_prime[i - a] = false;
    }
  }

  for (int i = 2; i * i <= p; i++) {
    if (p % i == 0) {
      for (int j = i; j <= b; j += i) {
        if (j >= a && (j % p) % i == 0) {
          is_relatively_prime[j - a] = false;
        }
      }
      while (p % i == 0) {
        p /= i;
      }
    }
  }
  if (p > 1) {
    for (int i = p; i <= b; i += p) {
      if (i >= a) {
        is_relatively_prime[i - a] = false;
      }
    }
  }

  printf("Liczby względnie pierwsze z liczbą %d w przedziale [%d, %d] to:\n",
         p, a, b);
  for (int i = a; i <= b; i++) {
    if (is_relatively_prime[i - a]) {
      printf("%d\n", i);
    }
  }
}

void splitWords(char *s) {
  char *token = strtok(s, " ");

  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, " ");
  }
}

struct Item {
  float value;
  struct Item *next;
};

// Dodanie elementa.
void insert(struct Item **head, float value);

// Wyprowadzić lista elementów
void printList(struct Item *head);

// Kasowanie elementa za wskazanym pointerem
void delete (struct Item **head, float value);

// Ile elementów w liście
int size(struct Item *head);

// Sprawdź czy pusta lista
int isEmpty(struct Item *head);

void insert(struct Item **head, float value) {
  struct Item *newnode;
  newnode = (struct Item *)malloc(sizeof(struct Item));

  newnode->value = value;
  newnode->next = NULL;

  if (*head == NULL) {
    *head = newnode;
  } else {
    struct Item *temp = *head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}

void delete (struct Item **head, float value) {
  struct Item *temp = *head;
  struct Item *prev = NULL;

  if (temp != NULL && temp->value == value) {
    *head = temp->next;
    free(temp);
    printf("\nDeleted element : %f\n", value);
    return;
  }

  while (temp != NULL && temp->value != value) {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL) {
    printf("\nElement not found in the list.\n");
    return;
  }

  prev->next = temp->next;
  printf("\nDeleted element : %f\n", temp->value);
  free(temp);
}

void printList(struct Item *head) {
  struct Item *temp;

  temp = head;
  while (temp != NULL) {
    printf(" |%f| ", temp->value);
    temp = temp->next;
  }
  printf("\n");
  return;
}

int size(struct Item *head) {
  if (head == NULL)
    return 0;
  int i = 0;
  struct Item *current = head;
  while (current != NULL) {
    i++;
    current = current->next;
  }
  return i;
}

int isEmpty(struct Item *head) {
  if (head == NULL)
    return 1;
  return 0;
}

int main() {
  int a, b, p;
  printf("Wprowadz zakres [a, b] i nr. p: ");
  scanf("%d %d %d", &a, &b, &p);

  printf("\n\n      Algorytm wyznaczania liczb względnie "
         "pierwszych\n*********************************************************"
         "***\n");
  relatively_prime_in_range(a, b, p);

  printf(
      "************************************************************\n\n\n      "
      "Algorytm podziału łańcucha na "
      "słowa\n************************************************************\n");
  char s[] = "This is a test string.";
  splitWords(s);

  printf(
      "************************************************************\n\n\n\n");

  printf("      Algorytm usuwania wybranego elementu listy "
         "jednokierunkowej\n***************************************************"
         "*********\n");

  struct Item *head = NULL;
  insert(&head, 3);
  insert(&head, 5);
  insert(&head, 1);
  insert(&head, 2);

  printList(head);

  delete (&head, 2);

  printList(head);

  printf("************************************************************\n");
  return 0;
}
