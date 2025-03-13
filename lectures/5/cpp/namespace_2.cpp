#include <iostream>

namespace firstSpace {
void foo()
{
    std::cout << "function from firstSpace: foo()" << std::endl;
}
}

namespace secondSpace {
void foo()
{
    std::cout << "function from secondSpace: foo()" << std::endl;
}
}
 
void foo()
{
    std::cout << "function: foo()" << std::endl;
}

namespace firstSpace {
    struct point {
        double x, y;
        point(double x=0, double y=0): x(x), y(y) 
        {
            std::cout << "point constructor from firstSpace" << std::endl;
        }
    };
}


int main()
{
    firstSpace::foo();
    secondSpace::foo();
    foo(); 
    // ::foo(); // -аналогично, вызов глобальной функции foo()

    firstSpace::point pt(1, 2);
    // point pt(1, 2); // ошибка: point не определен в глобальной области видимости
    
    return 0;
}