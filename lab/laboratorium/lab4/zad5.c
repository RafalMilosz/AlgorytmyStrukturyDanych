/*
Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu Fibonacciego
*/
#include <stdio.h>
 
int pascal(int row, int col);
 
int main()
{
  printf("%d", pascal(7, 4));
  return 0;
}
int pascal(int row, int col) {
   if(col == 0)
     return 1;
  if(row == 0)
    return col;
  return (row * pascal(row - 1, col - 1)) / col;
}
