# Программа 1

```cpp
#include <stdio.h>  // подключение стандартных библиотек
#include <stdlib.h> // это были комментарии до конца строки
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "rus");
  /*
    %d - int
    %f - float
    %lf - double
    %c - char
    %s - string
*/
  int a = 13, r, var;
  int b = a;
  double var_d = 13.0;
  char c = 'A';
  
  printf("enter var\n");
  // scanf("%d", &var);
  // scanf("%lf", &var_d);
  scanf(" %d %c %d", &var, &c, &r);
  printf("char = %c\n", c);
  printf("var = %d\n", var);
  printf("r = %d\n", r);

  // printf("var = %lf\n", var_d);
  return 0;
}

```
