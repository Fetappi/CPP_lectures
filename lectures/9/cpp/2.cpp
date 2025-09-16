#include <iostream>

template <typename T>
T sq_rect(T a, T b)
{
    return a * b;
}
// можно писать прототип функции, а реализацию позже
int main()
{
    int a = 2, b = 10;
    double x = 3.0, y = 20.0;
    
    std::cout << "Area of rectangle (int): " << sq_rect(a, b) << std::endl;
    std::cout << "Area of rectangle (double): " << sq_rect(x, y) << std::endl;
    std::cout << "Area of rectangle (double): " << sq_rect<double>(a, b) << std::endl;
    // std::cout << "Area of rectangle (int): " << sq_rect(x, b) << std::endl; // Error: no matching function for call to 'sq_rect(double&, int&)'
    std::cout << "Area of rectangle (int): " << sq_rect<int>(a, y) << std::endl; // Error: no matching function for call to 'sq_rect(int&, double&)'
    std::cout << "Area of rectangle (double): " << sq_rect<double>(x, b) << std::endl; // Error: no matching function for call to 'sq_rect(double&, int&)'
    
    return 0;
}