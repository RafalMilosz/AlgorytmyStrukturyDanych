1 Przeczytać swoje zadanie
~~~
Przeczytał
~~~
2 Prawidłowo ustawić dane wejściowe i wyjściowe:
tut wejście 
~~~
 printf("Podaj wiek dziecka: ");
  scanf("%d", &age);
~~~
tut wyjście
~~~
printf("Liczba najwyzszych swiec na torcie: %d\n", highest_candle);
~~~
3 Napisać pseudokod algorytmu
~~~
age = int(input("Podaj wiek dziecka: "))
highest_candle = 1
for i in range(2, age+1):
  if i == age:
    highest_candle += 1
print("Liczba najwyższych świec na torcie:", highest_candle)
~~~

4 Udowodnienie, że kod pracuje(nie udałoś dodać zdjęcie) 
~~~
 make -s
 ./main
Podaj wiek dziecka: 5
Liczba najwyzszych swiec na torcie: 2
 ^C
~~~
