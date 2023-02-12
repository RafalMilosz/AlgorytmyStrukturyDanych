/*
Minimalna Liczba Monet
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_INT 100

int *minCoins(int *coinList, int n, int value);

int main(void) {
  int coinList[] = {1, 2, 5};
  int value = 69;
  int len = sizeof(coinList) / sizeof(coinList[0]);
  int *razem;
  razem = minCoins(coinList, len, value);
  printf("Liczba %d jest zlozona z tych monet:", value);
  for (int i = 0; i < MAX_INT; i++) {
       if (razem[i]== 0 ){
      break;
    }
    printf("%d, ", razem[i]);
  }
  free(razem);
  return 0;
}
int *minCoins(int *coinList, int n, int value) {
  int *S= malloc(MAX_INT);
 int j = 0;
  for (int i = n - 1; i >= 0; i--) {
    while (value >= coinList[i]) {
      S[j] = coinList[i];
      value = value - coinList[i];
      j++;
    }
    if (n == 0) {
      break;
    }
  }
  return S;
}
