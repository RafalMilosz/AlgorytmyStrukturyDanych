/*
Zadanie Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale. x - zmieniase z x0 do xn, krokiem hx
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double a, x, x0, xn, xh;
  printf("Wprowadź a: ");
  scanf("%lf", &a);
 
  while (a == 0) {
    printf("A nie może być równe zero, wprowadź a ponownie: ");
    scanf("%lf", &a);
  }
  printf("Wprowadź xn: ");
  scanf("%lf", &xn);

  printf("Wprowadź xh: ");
  scanf("%lf", &xh);

  while (xh <= 0) {
    printf("hx musi być większe od zera, wprowadź hx ponownie: ");
    scanf("%lf", &xh);
  }
  printf("Wprowadź x0: ");
  scanf("%lf", &x0);
 
  while (x0 >= xn) {
    printf("x0 musi być mniejsze od xn, wprowadź x0 ponownie: ");
    scanf("%lf", &x0);
  }
  fclose(stdin);
  x = x0;
  while (x <= xn && x >= x0) {
    printf("%f = ", (a*pow(x, 2)));
    printf("%f * ", a);
    printf("%f^2\n", x);
    x = x + xh;
  }
  return 0;
}
