#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    char str[100] = "Hello, World!";
    short old = 37;
    double x = 3.14;
    
    cout << "Enter old: ";
    cin >> old;
    cout << "Enter x: ";
    cin >> x;
    // scanf("%lf", &x);
    cout << "Enter str: ";
    cin >> str;

    cout << str << '\n' << old << '\n' << x << endl;

    return 0;

}