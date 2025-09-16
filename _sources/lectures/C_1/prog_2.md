# Программа 2

```cpp
// Данное макроопределение отключит лишние предупреждения при сборке
/*
Шишкин Артем Павлович
114 группа обучение
*/

    /*
        %d - int
        %f - float
        %lf - double
        %c - char
    */

    /*
    int - 4 байта от -2,147,483,648 до 2,147,483,647 
    unsigned int - 4 байта от 0 до 4,294,967,295
    float - 4 байта от 1.2E-38 до 3.4E+38, 7 знаков точности
    double - 8 байт от 2.3E-308 до 1.7E+308, 15 знаков точности
    char - 1 байт от -128 до 127 или от 0 до 255
    1 байт = 8 бит

    в 16 разрядной системе
    int - 2 байта от -32,768 до 32,767
    */




#include <stdio.h> // подключение стандартных библиотек
#include <math.h>

int main()
{
    double r1=0, r2=0, r3=0;
    char op;
    printf("enter r1\n"); // вывод на терминал приглашения
    scanf(" %lf", &r1); // ввод данных с терминала, начальный пробел
    // в форматирующей строке – важен!

    printf("enter op\n");
    scanf(" %c", &op);
    printf("enter r2\n");
    scanf(" %lf", &r2);
    switch (op) {
        case '-': r3=r1-r2; break;
        case '*': r3=r1*r2; break;
        case '/':
            if ( fabs(r2) < 1.0E-10 ) {  
                printf("Divide by zero!\n");
                return 1;
            }
            r3=r1/r2;
            break;
        
        case '+': 
            r3=r1+r2; 
            break;
        default:
            printf("Error!\n");
            return 2;
    }
    printf("%f %c %f = %f\n", r1, op, r2, r3); // вывод результата
    scanf(" %c", &op); // вводим что угодно, чтобы терминал не закрылся
    return 0;
}

}

```
