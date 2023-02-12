/*
ilosc liczb
*/
#include <stdio.h>

int liczb(char *text, int len);

int main(void) {
  char text[] =
      "Computer Steel generating28Checking Missouri Buck12nghamshire band60idth China Hampshire Missouri  "
      "Ports platforms Dynamic base payment deliver Senior ar90hitecture USB payment Designer m32thodology Ecuador "
      "4734100za Money reboot93generate 50e-contextualized copy Loop Cotton Fords "
      "portals Metal 40ambridgeshire invoice Computers Principal Iow25 bypass navigate Metrics Isl72nds";

  int len = sizeof(text) / sizeof(text[0]);
  int ilosc = liczb(text, len);

  for (int i = 0; i < len; i++) {
    printf("%c", text[i]);
  }
  printf("\n%d", ilosc);
  return 0;
}

int liczb(char *text, int len) {
  int ilosc = 0;
  for (int i = 0; i < len; i++) {
    if (text[i] > 47 && text[i] < 58) {
      ilosc++;
    }
  }

  return ilosc;
}
