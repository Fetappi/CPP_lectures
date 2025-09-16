#include <iostream>

int sq_rect(int a, int b)
{
    return a * b;
}
 
double sq_rect(double a, double b)
{
    return a * b;
}

int main()
{
    int a = 5, b = 10;
    double x = 5.0, y = 10.0;
    
    std::cout << "Area of rectangle (int): " << sq_rect(a, b) << std::endl;
    std::cout << "Area of rectangle (double): " << sq_rect(x, y) << std::endl;
    
    return 0;
}