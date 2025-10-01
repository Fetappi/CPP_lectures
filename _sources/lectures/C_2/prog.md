# Лекция 2

## Создание своих функций

```cpp
#include <stdio.h> // Пример 1
int myabs(int x)    // функция описывается до своего вызова
// Здесь x – формальный параметр, его значение неизвестно,
// известен только тип этого аргумента.
{
    if (x < 0)
        return -x;
    return x;
}

int main()
{
    int a = 10, b = 0, c = -2;
    int d, e, f;
    d = myabs(a); // вызываем функцию myabs для фактического входного параметра a
    e = myabs(b);
    f = myabs(c);
    printf("d = %d, e = %d, f = %d\n", d, e, f);
}
```

## Цикл `while` и библиотека `math.h`

```cpp
#include <stdio.h>
#include <math.h>

// Пусть решается уравнение: atan(x) - 1 = 0
// (atan() – стандартная функция арктангенса)
// fabs() – стандартная функция, вычисляющая модуль аргумента
double c = a;
while (fabs(b - a) >= delta || fabs(atan(c) - 1) >= epsilon)
{
    c = (a + b) / 2; // находим середину интервала
    if ((atan(a) - 1) * (atan(c) - 1) < 0)
    {
        b = c; // если функция меняет знак на первом интервале
    }
    else if ((atan(с) - 1) * (atan(b) - 1) < 0)
    {
        a = c; // если функция меняет знак на втором интервале
    }
    else
    {
        /* функция не меняет знак ни на одном интервале, она имеет разрывы
        или множественные корни на каждом из них, решение построить
        невозможно */
        printf("Error: cannot solve equation on [%lf, %lf]!", a, b);
        return 1; // завершаем функцию main() с кодом ошибки
    }
}

```

## Цикл `for`

```cpp
#include <stdio.h>
#include <math.h>

int main()
{
    // int a = 2;
    // int x = a > 2 ? ++a : --a;
    // printf("x = %d, a = %d", x, a);

    double total = 10.;
    double sum = 0;
    int i=1;
    
    for (int i=0; i < l; i++)
    {
        
        printf("i = %d, sum = %lf\n", i, sum);
        sum += i++;
        if (i >= total) break;
    }
    // printf("sum = %d", sum);

    return 0;
}

```

## Цикл `while` и возвращаемое значение `scanf`

```cpp
#include <stdio.h>
int main()
{
    char s;
    int scount = 0;
    while (scanf(" %c", &s) == 1)
    {
        
        if (s == ' ')
            continue; // пробел не подсчитываем
        scount++;
        if (s == 'z')
            break; // при вводе z завершаем подсчет
    }
    printf("%d\n", scount);
    return 0;
}
```

## Цикл `do_while`

```cpp
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "rus"); // переходим в консоли на русский язык
    int i, sum;               // объявление переменных типа int
    i = 1;                    // начальное значение i равно 1
    sum = 0;                  // начальное значение sum равно 0
    do                        // повторять
    {
        sum += i; // увеличить sum на i
        i++;      // увеличить i на 1
    } while (i < 5); // пока значение i не станет равным 101
    printf("Сумма чисел от 1 до 5 = %d", sum); // вывод суммы
    getchar();                                   // ожидаем ввода символа, чтобы терминал не закрылся
    return 0;
}

```
