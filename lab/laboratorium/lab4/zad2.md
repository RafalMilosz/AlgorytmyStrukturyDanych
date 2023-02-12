Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu Fibonaccieg
~~~
 fib( n)
{
  if(n==1)
      return 0;
  if(n==2)
   return 1;
  return fib(n-2)+fib(n-1);
}

~~~
