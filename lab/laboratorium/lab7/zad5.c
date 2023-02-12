/*
anagram
*/
#include <stdbool.h>
#include <stdio.h>

bool anagram(char *text, char *slowo, int len);

int main(void) {
  char text[] = "cameralistic";
  char slowo[] = "acclimatiser";

  int len = sizeof(text) / sizeof(text[0]);
  bool anag = anagram(text, slowo, len);

  for (int i = 0; i < len; i++) {
    printf("%c", text[i]);
  }
  printf(" i ");
  for (int i = 0; i < len; i++) {
    printf("%c", slowo[i]);
  }
  if (anag == true) {
    printf("\nTo jest anagram");
  } else if (anag == false) {
    printf("\nTo nie anagram");
  }

  return 0;
}

bool anagram(char *text, char *slowo, int len) {
  int liter = 0;
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      if (text[i] == slowo[j]) {
        liter++;
        j += len;
      }
    }
  }
  if (liter == len) {
    return true;
  }
  return false;
}
