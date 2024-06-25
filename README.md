
# Advanced Calculator

## Opis

`AdvancedCalculator` to prosty kalkulator napisany w C++. Obsługuje podstawowe operacje matematyczne takie jak dodawanie, odejmowanie, mnożenie, dzielenie, potęgowanie i pierwiastkowanie.

## Struktura projektu

Projekt składa się z trzech głównych plików:

- `Calculator.h`: Plik nagłówkowy definiujący klasę `AdvancedCalculator`.
- `AdvancedCalculator.cpp`: Plik źródłowy implementujący metody klasy `AdvancedCalculator`.
- `main.cpp`: Główny plik źródłowy zawierający funkcję `main` oraz interfejs użytkownika.

## Instalacja i uruchomienie

### Wymagania

- Kompilator C++ (np. `g++`)
- `make` (opcjonalnie, do użycia pliku Makefile)

### Kompilacja

Aby skompilować projekt, możesz użyć poniższych komend w terminalu:

```sh
g++ -o calculator main.cpp AdvancedCalculator.cpp
```

Lub jeśli używasz `make`, utwórz plik `Makefile` o następującej treści:

```makefile
all: calculator

calculator: main.o AdvancedCalculator.o
    g++ -o calculator main.o AdvancedCalculator.o

main.o: main.cpp
    g++ -c main.cpp

AdvancedCalculator.o: AdvancedCalculator.cpp
    g++ -c AdvancedCalculator.cpp

clean:
    rm -f *.o calculator
```

Następnie uruchom `make`:

```sh
make
```

### Uruchomienie

Po skompilowaniu projektu, uruchom program za pomocą poniższej komendy:

```sh
./calculator
```

## Użycie

Po uruchomieniu programu, użytkownik zostanie poproszony o wybór operacji oraz podanie liczb. Program obsługuje następujące operacje:

- `add` - dodawanie
- `subtract` - odejmowanie
- `multiply` - mnożenie
- `divide` - dzielenie
- `power` - potęgowanie
- `sqrt` - pierwiastkowanie

Przykładowy przebieg programu:

```
Available operations:
1. add
2. subtract
3. multiply
4. divide
5. power
6. sqrt
Enter operation: add
Enter first number: 5
Enter second number: 3
Result: 8
```

## Licencja

Ten projekt jest udostępniony na licencji MIT. Szczegóły w pliku `LICENSE`.
```