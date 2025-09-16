#include <iostream>

template <typename T1, typename T2>
auto sq_rect(T1 a, T2 b) // auto - возвращаемый тип, компилятор сам определит тип возвращаемого значения с C++14
{
    return a * b;
}

int main()
{
    int a = 2, b = 10;
    double x = 3.0, y = 20.0;
    
    std::cout << "Area of rectangle (double, int): " << sq_rect(x, b) << std::endl;
    std::cout << "Area of rectangle (int, double): " << sq_rect(a, y) << std::endl; 
    std::cout << "Area of rectangle (int, int): " << sq_rect(a, b) << std::endl; 
    std::cout << "Area of rectangle (double, double): " << sq_rect(x, y) << std::endl; 
    
    return 0;
}