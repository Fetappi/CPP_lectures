
#include<stdio.h>
#include<math.h>
#include <iostream>
using namespace std;

class Complex {
    double re;
    double im;
 
public:
    Complex() : re(0.0), im(0.0)
        { }
    Complex(double real) : re(real), im(0.0)
        { }
    Complex(double real, double imag) : re(real), im(imag)
        { }
 
    void get_data(double& re, double& im)
    {
        re = this->re;
        im = this->im;
    }
};

int main()
{
    Complex c1;
    Complex c2(0.5);
    Complex c3(-5.4, 7.8);

    double re, im;
    c3.get_data(re, im);
    cout << re << " " << im << endl;

    return 0;
}
