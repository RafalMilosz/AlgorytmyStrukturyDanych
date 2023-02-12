/*
Poszukiwanie minimalnej albo maksymalnej.
*/
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main(void){
  srand(time(NULL));
  
  int n = 20;
  double x[n], min = 1000, max = 0;

  for(int i = 0; i < n; i++){
    x[i] = (rand() % 1000) + 1;
  } 
  
  for(int i = 0; i < n; i++){
    if(min > x[i]){
      min = x[i];
    }
    if(max < x[i]){
      max = x[i];
    }
    }

  printf("Minimum = %lf", min);
  printf("Maximum = %lf", max);
}
