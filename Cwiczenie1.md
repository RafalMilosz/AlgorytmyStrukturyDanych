# Zadanie 1
Napisac program ktora pyta ilosc dni w miesioncu idzisiejszy dzien. Wyprowadza ile zostalo dni do konca miesionca.

~~~
miesionc(il_dni, dzien){
   zost = il_dni - dzien
   return zost
 } 
~~~
# Zadanie 2
Napisac program ktory oblicza jakiego roku urodzenia i jaki teraz jest rok. Wyprowadza ile lat uzytkowniku.

~~~
ile_lat(jaki_rok, teraz_rok){
  lat = teraz_rok - jaki_rok
  return lat
}
~~~
# Zadanie 3
Dana calkowite liczba k (1 <= k <= 180) i ciag liczb 10111213..9899, do kturego sa zapisane wszystkie dwoznakowe liczby. Wyznaczyc numer pary liczb, to ktorej wpada liczba k
~~~
pary(k, array){
   i = 0 while( i < k[180] ) 
   { print(array[i]) } 
return 0 
}
~~~

# Zadanie 4
Liczba naturalna z n cyfr jst liczba Armstronga, jezelu suma jego liczb w pierwaztku n, jest rowna samej liczbie. Naprzyklad, 153 = 1^3 + 5^3 + 3^3. Napisac program otrzymania wszykich liczb Armstronga, z 3 i 4 liczb. Opisz liste jedno- i dwukierunkow, oraz cykliczne.
~~~
int num, originalNum, reszta, n = 0; float rezultat = 0.0;
originalNum = num;
   for (originalNum = num; originalNum != 0; ++n) { originalNum /= 10; }
   for (originalNum = num; originalNum != 0; originalNum /= 10) { remainder = originalNum % 10;
   }
if ((int)result == num)
return 0; 
}
~~~
