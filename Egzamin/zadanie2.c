#include <stdio.h>
int main() {
  int age;
  int highest_candle;
  
  printf("Podaj wiek dziecka: ");
  scanf("%d", &age);
  
  highest_candle = 1;
  
  for(int i = 2; i <= age; i++) {
    highest_candle = i == age ? highest_candle + 1 : highest_candle;
  }
  
  printf("Liczba najwyzszych swiec na torcie: %d\n", highest_candle);
  return 0;
}
