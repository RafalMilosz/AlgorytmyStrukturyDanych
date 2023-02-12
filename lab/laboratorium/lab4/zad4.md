Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu geomytrecznego
~~~
geomytr(k,n,o)
 if(n > 1){
  q = o/k
  return  geomytr(o,o*q,n - 1)
 else{
 return k
 }

~~~
