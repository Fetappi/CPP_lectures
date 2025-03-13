#include <iostream>

namespace firstSpace { 

void foo()
{
    std::cout << "function from firstSpace: foo()" << std::endl;
}

int show_and_return(int a)
{
    std::cout << "a = " << a << std::endl;
    return a;
}

class point {
    double x, y; 
public:
    point(double x=0, double y=0): x(x), y(y) 
    {
        std::cout << "point constructor from firstSpace" << std::endl;
    }

    void show(); // объявление метода класса
    // {
    //     std::cout << "x = " << x << " y = " << y << std::endl;
    // }
};

}

void firstSpace::point::show() // реализация метода класса
{
    std::cout << "x = " << x << " y = " << y << std::endl;
}

// using <alias> = <тип данных>; // создание псевдонима типа данных
using p_f = int(*)(int);
using p_foo = void(*)();
using point2D = firstSpace::point; // должен быть именно тип данных
// а представьте если надо будет определить тип данных указателя внутри класса, который еще в пространстве имен
// using point2D = firstSpace::point(); // ошибка: не тип данных, а объявление переменной
// using point2D = firstSpace:foo; // ошибка: не тип данных, а функция


int main()
{
    void (*pointer_foo)() = firstSpace::foo;

    int (*pointer_SnR)(int) = firstSpace::show_and_return;
    
    // p_foo pointer_foo = firstSpace::foo;
    // p_f pointer_SnR = firstSpace::show_and_return;

    (*pointer_foo)();
    (*pointer_SnR)(5);

    point2D pt(1, 2);
    firstSpace::point pt2(3, 4);

    return 0;
}