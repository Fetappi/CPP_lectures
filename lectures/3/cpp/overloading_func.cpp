#include <iostream>
using namespace std;


int modul(int x)
{
    cout << "modul(int)" << endl;
    if(x >= -10 && x <= 10)
        return (x > 0) ? x : -x;
    return x;
}
 
double modul(double x)
{
    cout << "modul(double)" << endl;
    if(x >= -10 && x <= 10)
        return (x > 0) ? x : -x;
    return x;
}

int main()
{
    double res_1 = modul(-0.5);  // modul(double)
    int res_2 = modul(-0.5);        // modul(double)
    double res_3 = modul(-5);    // modul(int)
    int res_4 = modul(-5);           // modul(int)
 
    return 0;
}