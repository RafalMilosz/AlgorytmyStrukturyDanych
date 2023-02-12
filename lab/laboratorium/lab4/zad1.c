/*
Dana calkowita liczba n >=1. Napisz rekurencyjna funkcja takiej liczby , ktora wypelnia taki warunek 2^a-1 <= n < 2^a
*/
int liczba(int n, int a);
  
  void main(void){
  
  printf("a = %d", liczba(3498,0));
  }
  int liczba(int n, int a){
   if(pow(2,a-1) <= n&&n < pow(2,a)){
     return a;
   }else
     return liczba(n, a+1);
  return;
  }
