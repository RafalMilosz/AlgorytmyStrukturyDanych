/*
Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n), 
wyniki funckji zapisywac Y(n)
*/
#include <math.h>
#include <stdio.h>

void main(void){
  double a, x[n], y[n];
  int i;
  
  printf("Podaj tablicy: ");
  scanf("%d", &n);  
  
  printf("Podaj a: ");
  scanf("%lf", &a); 
  for(int i = 0; i < n; i++){
    printf("Podaj x%d: ",i+1);
    scanf("%lf", &x[i]);
  }

  for(int i = 0; i < n; i++){
    y[i] = a * x[i] * x[i];
    printf("%.1lf = %.1lf * %.1lf ^ 2 \n", y[i], a, x[i]);
  }
}
