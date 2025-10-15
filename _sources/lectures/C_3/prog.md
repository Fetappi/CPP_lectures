# Лекция 3

## Массивы, объявление, инициализация, заполнение, вывод

```cpp
 #include "stdio.h"
 
 int main()
 {
    char my_mass[10];
    for (int i = 0; i < 10; i++)
    {
        my_mass[i] = (char) (i+65);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%c", my_mass[i]);
    }

 }
```

```cpp
 #include "stdio.h"
 
 int main()
 {
    // char my_mass[10] = "abcdf";
    // int my_mass[10] = {};
    int my_mass[] = {1, 2, 10043, 4650, 1324, 4546};

    // for (int i = 0; i < 10; i++)
    // {
    //     my_mass[i] = (char) (i+65);
    // }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", my_mass[i]);
    }

 }
```

```cpp
 #include "stdio.h"
 
 int main()
 {

   //  int my_mass[] = {1, 2, 10043, 4650, 1324, 4546};
   //    int val;
   //  int s;
   //  s = sizeof(my_mass) / sizeof(my_mass[0]);
   //  printf("%d", s);

   const int size_my_mass = 5;
   int my_mass[size_my_mass];

   int my_size;
   int my_mass[my_size];

   scanf("%d", &my_size);
   

   for (unsigned int i = 0; i < 10; i++)
   {
      printf("%d ", my_mass[i]);
   }


    return 0;
 }
```

```cpp
#include "stdio.h"
 
#define LEN 1000

#define SQ(x) x*x

int main()
 {
   int my_mass[LEN];
   int val = 3;
   int res = SQ(2+2);
   printf("%d", res);
   // printf("%d", SQ(val));



   // for (unsigned int i = 0; i < 10; i++)
   // {
   //    printf("%d ", my_mass[i]);
   // }


    return 0;
 }
```

```cpp
#include "stdio.h"

int main()
{
  char str[] = "Hello";
  // char str[50] = "hello";
  printf("size = %c", str[5]);
  // int size = sizeof(str) / sizeof(char);
  // printf("size = %d", size);

  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%c", str[i]);
  // }

  return 0;
}
```

```cpp
#include "stdio.h"
#include <stdlib.h>
#include <time.h>

#define R_1 (double) rand()/RAND_MAX

int main()
{

  // printf("%d", R_1);
  // printf("%d\n\n", (unsigned)time(NULL));
  srand((unsigned)time(NULL));
  // srand(11);
  double a[2][3];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      a[i][j] = R_1;
    }
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%lf\t", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
```
