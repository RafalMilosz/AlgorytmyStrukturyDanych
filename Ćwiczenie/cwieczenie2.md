# Zadanie 1
Silnia(factorial) 
~~~
silnia(n){
i == 0
silnia = 1
while ( i < n ){
        silnia *= i
        i++
    }
    return silnia
}
~~~
![image](https://user-images.githubusercontent.com/115027153/218310693-4a45b48f-44f0-472e-be78-2db8af126214.png)
![image](https://user-images.githubusercontent.com/115027153/218310710-f5406a2a-3a26-4b0c-bbdf-d50fc9b65282.png)
![image](https://user-images.githubusercontent.com/115027153/218310720-66fcc52b-2112-4fba-b9dc-b6be5761f24f.png)


# Zadanie 2
Iloczyn i reszta. Realizacja z warunkem pocztkawym calkowita liczba - n, wyjsce licby(lista) - q i r
~~~
IloIRes(liczba, dzielnik){
  
  iloczyn = liczba * dzielnik
  reszta = liczba % dzielnik
  
  lista[]={iloczyn, reszta}
  
  return lista
}
~~~
![image](https://user-images.githubusercontent.com/115027153/218310932-791eba1f-f67f-4f94-ba9e-c6efd831d247.png)


# Zadanie 3
NWD 
~~~
NWD(lic1, lic2){
  
  while(lic1 != lic2){
    if(lic1 > b){
      lic1 -= lic2
    }
    else{
      lic2 -= lic1
    }
  }
  return lic1
}
~~~

# Zadanie 4
Srednia arytmetyczna
~~~
srednia(tabela, ilosc){
  sred = 0
  
  for(i = 0; i < ilosc; i++){
    sred += tabela[i]
  }
  
  sred = sred / ilosc

  return sred
}
~~~

# Zadanie 5
Wyszukiwanie maksimum (minimum) w tablice liczb naturalnych (dwa odrobnych pseudokoda)
~~~
MinMax(tabela, ilosc){
  min = tabela[0]
  max = tabela[0]
  
  for(i = 0; i < ilosc; i++){
    if(min > tabela[i]){
      min = tabela[i]
    }
    if(max < tabela[i]){
      max = tabela[i]
    }
  }
  
  minmax[]={min,max}
  
  return minmax
}
~~~
