#include <iostream>
#include <exception>
#include <Windows.h>

// int perimetr_tr(int a, int b, int c)
// {
//     if(a < 0 || b < 0 || c < 0 || a > b+c || b > a+c || c > a+b)
//         return -1;
 
//     return a+b+c;
// }

int perimetr_tr(int a, int b, int c)
{
    if(a < 0 || b < 0 || c < 0 || a > b+c || b > a+c || c > a+b)
        throw "Error: a, b, c are not triangle lengths";
 
    return a+b+c;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    int p = perimetr_tr(5, 1, 2); // 5, 1, 2 - не треугольник
    // не явнов вызывается 
    // std::terminate(); // вызывается при ошибке
 
    return 0;
}