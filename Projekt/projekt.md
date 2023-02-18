# Projekt do przedmiotu "Algorytmy i struktury danych"

### Praca wykonał [Rafał Miłosz](https://github.com//)

### Data 2023-02-15

### Treść
- [Algorytm wyznaczania liczb względnie pierwszych](#algorytm-wyznaczania-liczb-względnie-pierwszych)
- [Algorytm podziału łańcucha na słowa](#algorytm-podziału-łańcucha-na-słowa)
- [Algorytm usuwania wybranego elementu listy jednokierunkowej](#algorytm-usuwania-wybranego-elementu-listy-jednokierunkowej)
- [Zródła](#zródła)

</br></br>

# Algorytm wyznaczania liczb względnie pierwszych

### Opis

**Algorytm wyznaczania liczb względnie pierwszych** to algorytm służący do znalezienia wszystkich liczb pierwszych w zakresie między dwoma liczbami `a` i `b`. 
Algorytm wykorzystuje technikę sita Eratostenesa do odfiltrowania liczb, które nie są względnie pierwsze z `p`. 
Algorytm opiera się na założeniu, że dwie liczby są względnie pierwsze, gdy ich największy wspólny dzielnik jest równy `1`.

**Wejściami algorytmu są:**

- `a` - początek zakresu, dla którego mają zostać znalezione liczby względnie pierwsze z `p`. </br>
- `b` - koniec zakresu, dla którego mają zostać znalezione liczby względnie pierwsze z `p`. </br>
- `p` - liczba, względem której mają zostać wyznaczone liczby względnie pierwsze.

</br>

## Pseudokod :page_facing_up:

```
relatively_prime_in_range(a, b, p)
Begin
1. Zainicjuj tablicę flag o nazwie sieve, która będzie wskazywać, które liczby są względnie pierwsze z p. Rozmiar sito to b - a + 1.
2. Ustaw wszystkie flagi w sito na true.
3. Dla i = a do b
        3.1. Jeśli i jest podzielne przez p, ustaw flagę dla i w sito na false.
        3.2. W przeciwnym razie ustaw flagę dla i w sito na wynik gcd(i, p) == 1.
Koniec pętli
Wydrukuj wszystkie liczby i z zakresu a do b, dla których sieve[i-a] jest prawdziwe.
Koniec
```

</br>

## Udowodnienie, że algorytm jest końcowy

1. **Algorytm wyznaczania liczb względnie pierwszych** jest zgodny z zasadą **Eratostenesa**, która jest jedną z najstarszych i najprostszych metod znajdowania wszystkich liczb pierwszych do określonej wartości granicznej.
2. **Algorytm wyznaczania liczb względnie pierwszych** opiera się na prostych operacjach matematycznych takich jak dzielenie, odejmowanie i obliczanie największego wspólnego dzielnika (`gcd`), co oznacza, że jest on skończony.

</br>

## Złożonośc

1. Pierwszym krokiem jest utworzenie tablicy `sieve` o rozmiarze `b - a + 1`, co jest operacją stałego czasu, `O(1)`.

2. Drugim krokiem jest ustawienie wszystkich flag w `sieve` na wartość `true`, co jest operacją o stałym czasie, `O(1)`.

3. Trzecim krokiem jest pętla `for`, która iteruje przez wszystkie liczby od `a` do `b`. Wewnątrz pętli `for`, wykonywane są 2 operacje:
    - Pierwsza operacja to sprawdzenie, czy i jest podzielne przez `p`. Jeśli tak, to flaga dla `i` w `sieve` zostaje ustawiona na `false`. Złożoność tej operacji wynosi `O((b-a)/p)`, ponieważ tylko co `p`-ta liczba jest sprawdzana.
    - Druga operacja to obliczenie `gcd(i, p) == 1` i ustawienie flagi dla `i` w `sieve` na `true`, jeśli wynik jest równy `1`. Obliczanie `gcd` jest operacją o złożoności `O(log min(i, p))`, ale ponieważ iterujemy tylko przez liczby od `a` do `b`, to maksymalna wartość `gcd` to `min(b, p)`, co oznacza, że złożoność tej operacji wynosi `O(log min(b,p))`. Ponieważ obie operacje są wykonywane raz dla każdej liczby od `a` do `b`, to złożoność całej pętli wynosi `O((b-a) * log min(b,p))`.
    
Ostatecznie, złożoność całego algorytmu wynosi `O((b-a) * log min(b,p))`, co oznacza, że jest on efektywny dla małych przedziałów i małych wartości `p`, ale może być wolny dla dużych przedziałów lub dużych wartości `p`.

</br>

## Przykład zastosowania

Przykładem zastosowania **algorytmu wyznaczania liczb względnie pierwszych** może być **kryptografia**, w której często wymagane jest wyznaczanie kluczy prywatnych i publicznych.

W **kryptografii asymetrycznej**, taka jak **RSA**, klucz publiczny składa się z dwóch liczb pierwszych, natomiast klucz prywatny zależy od tych samych liczb, ale nie muszą być one ujawnione publicznie. Aby wyznaczyć klucze, musimy najpierw wyznaczyć dwie duże liczby pierwsze, co jest trudne, jeśli nie znamy żadnych liczb pierwszych o odpowiedniej wielkości.

**Algorytm wyznaczania liczb względnie pierwszych** może pomóc w znalezieniu wszystkich liczb pierwszych w danym zakresie, a następnie sprawdzeniu, które z nich spełniają określone kryteria i mogą zostać użyte do wyznaczenia kluczy prywatnych i publicznych.

## Program
[projekt.c](projekt.c)

</br></br>

# Algorytm podziału łańcucha na słowa

### Opis

**Algorytm dzielenia łańcucha tekstowego na słowa** polega na podziale podanego łańcucha na mniejsze części, które są oddzielone separatorem (w tym przypadku jest to spacja) i reprezentują poszczególne słowa w tekście. Algorytm ten działa w sposób iteracyjny i polega na wykorzystaniu funkcji `strtok`, która dzieli łańcuch tekstowy na kolejne tokeny.

Algorytm rozpoczyna się od wywołania funkcji `strtok`, która przyjmuje jako argument łańcuch tekstowy oraz separator. Następnie w pętli `while` pobierany jest kolejny token za pomocą funkcji `strtok`, która działa na podstawie łańcucha, którego jeszcze nie podzielono na tokeny. Kolejny token jest następnie drukowany na ekranie za pomocą funkcji `printf`. Pętla `while` kontynuuje działanie, aż do momentu, gdy funkcja `strtok` zwróci wartość `NULL`, co oznacza, że wszystkie tokeny zostały już przetworzone.

**Wejściami algorytmu są**:

- `s` Łańcuch tekstowy do podziału na słowa. </br>

</br>

## Pseudokod :page_facing_up:

```
splitWords(s)
Begin
1. Zainicjuj wskaźnik o nazwie token, aby wskazywał na pierwszy token w ciągu znaków s, uzyskany przy użyciu spacji jako separatora.
2. Dopóki token nie jest pusty, powtarzaj kroki 3-5.
3. Wydrukuj aktualny token.
4. Zaktualizuj wskaźnik token, aby wskazywał na następny token w s uzyskany przy użyciu spacji jako separatora.
Koniec pętli While
Koniec funkcji.
```

</br>

## Udowodnienie, że algorytm jest końcowy

1. W algorytmie wykorzystuje się funkcję `strtok`, która dzieli łańcuch na mniejsze części zgodnie z określonym separatorem (w tym przypadku jest to spacja). Gdy funkcja strtok nie może już znaleźć kolejnej części, zwraca wartość `NULL`.

2. W pętli `while`, która działa do momentu, gdy `strtok` zwróci wartość `NULL`, pobierany jest kolejny token i drukowany jest na ekranie. W momencie, gdy nie ma już żadnego tokena, pętla się kończy, a tym samym kończy się działanie algorytmu.

Ponieważ funkcja `strtok` zwraca wartość `NULL` po przeanalizowaniu całego łańcucha, a pętla `while` kończy się, gdy wartość ta jest zwracana, możemy stwierdzić, że algorytm jest końcowy.

</br>

## Złożoność

Złożoność czasowa algorytmu dzielenia łańcucha tekstowego na słowa zależy od **długości łańcucha wejściowego**. Złożoność ta wynosi `O(n)`, gdzie `n` jest długością łańcucha wejściowego.

W algorytmie dzielenia łańcucha tekstowego na słowa, operacją wykonywaną wielokrotnie jest pobieranie kolejnych tokenów za pomocą funkcji `strtok` oraz drukowanie ich na ekranie. Oba te kroki wykonywane są tyle razy, ile jest słów w łańcuchu wejściowym, co oznacza, że liczba operacji wykonywanych w najgorszym przypadku jest równa liczbie słów w łańcuchu wejściowym.

Dlatego złożoność czasowa algorytmu dzielenia łańcucha tekstowego na słowa wynosi `O(n)`, gdzie `n` jest długością łańcucha wejściowego.

</br>

## Przykład zastosowania 

Przykładem zastosowania algorytmu dzielenia łańcucha tekstowego na słowa może być **przetwarzanie tekstu w programach do analizy tekstu lub wyszukiwarkach internetowych**.

Na przykład, gdy użytkownik wprowadza zapytanie w wyszukiwarce internetowej, algorytm dzielenia łańcucha tekstowego na słowa może być wykorzystany do podziału zapytania na poszczególne słowa kluczowe. W ten sposób, na podstawie słów kluczowych, wyszukiwarka może zwrócić wyniki, które są bardziej dopasowane do zapytania użytkownika.

Innym przykładem zastosowania algorytmu dzielenia łańcucha tekstowego na słowa może być analiza tekstu w programach do obróbki języka naturalnego. Na przykład, analizując wypowiedź użytkownika na temat produktu, algorytm ten może pomóc w wyodrębnieniu istotnych słów kluczowych, które pozwalają na określenie opinii użytkownika o produkcie.

## Program
[projekt.c](projekt.c)

</br></br>

# Algorytm usuwania wybranego elementu listy jednokierunkowej

## Schemat blokowy
[![](https://mermaid.ink/img/pako:eNp9k81ymzAQgF9lR2fsMWA7hkM6iT35cdxcklxifNiCUsuGFQOiBP-c-wyZPkavudV-rypycWg60xusPu1-q5XWLJQRZz77mmE6h_tRQHcKMwWt1imcTR9yhaXApALFkxQIYc4xmgV0ZoDz6ShGSDP-TS9FuOAaLPVuuf-x-w63D5OJRs8NOlwPV5XZDSQ4LHiugIo4BgFhvWCC2a-fJfE6TSggklDkRYkk8NM2oKFJt7nH5QZGDcFDajSirVPiz0rXHhn4YvpYYkzvfawgxUTsXkKhmQvD3EitFQZ0LHAr-AYujfWh99r6rS1LaxvDPPyw-j99bX_ZsL-a3uJR_88hmmxa6spw102ingDp0O4lpQp4zBNOCmKRq2r20X387n70fjvAcUPhZnpNTzJLCjO6Yv9aqaUsSSzRgv0rP1Y4trciXEQrIXX1EhR-iUVYzf46wHFDYdKYT93gP_pafHIYE7NYwrMERaQv5DoggICpuYYC5uvPCLNlwALaag4LJe8qCpmvsoJbrEgjVHwkUN_jhPlPGOc6miI9SpnUkP5l_po9M7_V7bRdt-91vRO33xl0B07fYpWO99xu2_Ns13P6A9txPHtrsZVJYbdPPGfguZ2eY3ds2-1ZjEdCyezz4QGZd7T9DWeYIvw?type=png)](https://mermaid.live/edit#pako:eNp9k81ymzAQgF9lR2fsMWA7hkM6iT35cdxcklxifNiCUsuGFQOiBP-c-wyZPkavudV-rypycWg60xusPu1-q5XWLJQRZz77mmE6h_tRQHcKMwWt1imcTR9yhaXApALFkxQIYc4xmgV0ZoDz6ShGSDP-TS9FuOAaLPVuuf-x-w63D5OJRs8NOlwPV5XZDSQ4LHiugIo4BgFhvWCC2a-fJfE6TSggklDkRYkk8NM2oKFJt7nH5QZGDcFDajSirVPiz0rXHhn4YvpYYkzvfawgxUTsXkKhmQvD3EitFQZ0LHAr-AYujfWh99r6rS1LaxvDPPyw-j99bX_ZsL-a3uJR_88hmmxa6spw102ingDp0O4lpQp4zBNOCmKRq2r20X387n70fjvAcUPhZnpNTzJLCjO6Yv9aqaUsSSzRgv0rP1Y4trciXEQrIXX1EhR-iUVYzf46wHFDYdKYT93gP_pafHIYE7NYwrMERaQv5DoggICpuYYC5uvPCLNlwALaag4LJe8qCpmvsoJbrEgjVHwkUN_jhPlPGOc6miI9SpnUkP5l_po9M7_V7bRdt-91vRO33xl0B07fYpWO99xu2_Ns13P6A9txPHtrsZVJYbdPPGfguZ2eY3ds2-1ZjEdCyezz4QGZd7T9DWeYIvw)

</br>

## Przykład zastosowania

Jednym z przykładów zastosowania algorytmu usuwania elementów z listy jednokierunkowej może być aplikacja do zarządzania listą zadań w systemie operacyjnym. W takiej aplikacji, lista zadań może być przechowywana jako lista jednokierunkowa, gdzie każdy element na liście reprezentuje pojedyncze zadanie. Algorytm usuwania elementów z listy jednokierunkowej może być użyty w takiej aplikacji do usuwania zadań, które zostały już wykonane lub zostały anulowane przez użytkownika.

## Program
[projekt.c](projekt.c)

</br></br>

# Zródła

- [Algorytm wyznaczania liczb względnie pierwszych](https://eduinf.waw.pl/inf/alg/001_search/0007.php)
- [Dzielenie łańcucha tekstowego na słowa](https://eduinf.waw.pl/inf/alg/001_search/0054.php)
- [Operacje na listach jednokierunkowych](https://eduinf.waw.pl/inf/alg/001_search/0086.php)
- [Prime numbers](https://en.wikipedia.org/wiki/Prime_number)
- [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
