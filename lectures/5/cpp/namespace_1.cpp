#include <iostream>

void foo()
{
    std::cout << "function: foo()" << std::endl;
}
 
int global_a = 5;
 
struct point {
    double x, y;
};

int main()
{
    // // :: - оператор разрешения области видимости
    // // если слева от :: ничего нет, то это глобальная область видимости, т.е. все что выше main
    
    point pt;
    //::point pt; //- аналогично, но явно указывается глобальная область видимости
     
    foo();
    // ::foo(); - аналогично, но явно указывается глобальная область видимости

    // // пример использования глобальной переменной
    // // global_a - глобальная переменная
    // std::cout << global_a << std::endl;

    int global_a = 10; // локальная переменная
    std::cout << global_a << ::global_a << std::endl;
 
    return 0;
}