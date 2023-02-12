Napisz funkcja rekurencyjna do obliczenia n-tej liczby ciągu arytmcznego
~~~
d = arr[n] - arr[n - 1]
set n to size of array

function Arytm(array arr, n, d) {
  if(n == 1)
    return d
  
  sort arr
  
  if(arr[n] - arr[n-1] != d)
    return 0
    
  else
    return Arytm(arr, n - 1)
}
~~~
