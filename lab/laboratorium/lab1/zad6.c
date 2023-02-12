/*
Obliczenie srednej
*/
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main(void){
  srand(time(NULL));
  
  int n = 20;
  double x[n], sred = 0;
  for(int i = 0; i < n; i++){
    x[i] = (rand() % 9) + 1;
  } 
  for(int i = 0; i < n; i++){
    sred = sred + x[i];
  }
  sred = sred / n;
  printf("Srednia = %lf", sred);
}
