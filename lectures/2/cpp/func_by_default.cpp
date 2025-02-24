#include <iostream>
#include <math.h>
 
using namespace std;

// using std::cout;
// using std::cin;
// using std::endl;
 
// void show_data(int a=1, const char* str="Hi!", double b=-5.43)
// {
//     cout << a << endl << str << endl << b << endl;
// }

// int main()
// {
//     // show_data();
//     show_data(10);
//     show_data(10, "Hello!", 3.1415);
//     return 0;
// }

int length(int a=0, int b, int c=0)  // ошибка
{
    return sqrt(a*a + b*b + c*c);
}
 
double length(double a=0, double b=0, double c)  // ошибка
{
    return sqrt(a*a + b*b + c*c);
}

double round_math(double x, int radix=0)
{
    double p = pow(10, radix);
    return round(x * p) / p;
}

int main()
{
    double res_1 = round_math(4.5634);  // 5
    double res_2 = round_math(4.5634, 1); // 4.6
    double res_3 = round_math(4.5634, 3); // 4.563
    cout << res_1 << "\n" << res_2 << "\n" << res_3 << endl;
    
    return 0;
}
 
// int main()
// {
//     // show_data();
//     show_data(10, "Hello!", 3.1415);
//     return 0;
// }

