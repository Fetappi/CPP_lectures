#include <iostream>

// template <typename T>
// T sq_rect(T a, T b)
// {
//     return a * b;
// }

template <typename T>
T sq_rect(const T& a, const T& b)
{
    return a * b;
}

template <typename T> void swap(T* a, T* b); // прототип шаблонной функции

// можно писать прототип функции, а реализацию позже
int main()
{
    double a = 2.0, b = 10.0;
    int x = 3, y = 20;
    
    
    std::cout << "Area of rectangle (double): " << sq_rect(a, b) << std::endl;
    
    swap(&a, &b); // вызов шаблонной функции
    std::cout << "swap " <<  a << " " << b << std::endl;


    return 0;
}

template <typename T>
void swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}