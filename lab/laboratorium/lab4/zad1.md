/*
Dana calkowita liczba n >=1. Napisz rekurencyjna funkcja takiej liczby , ktora wypelnia taki warunek 2^a-1 <= n < 2^a
*/
~~~
liczba(n,a);
  if(pow(2,a-1) <= n&&n < pow(2,a)){
    return a;
  }
  else
  
  return liczba(n, a+1);
~~~
