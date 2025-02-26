# Пример класса комплексные числа

```c++
#include<stdio.h>
#include<math.h>
#include <iostream>
using namespace std;

class complex
{
    double real, imag;
    public:
    
        //constructors
        complex(double x, double y)
        {
            real = x; imag = y;
        }
        complex()   //default conctructor should be only one
        {
            printf("Input real, imag:");
            scanf("%lf%lf", &real, &imag);
        }
        complex(complex& zc)// copy constructor 
        {
            real = zc.real;     imag = zc.imag;
        }
        complex(double qq)
        {
            real = qq;     
            imag = 0;
        }
    //member functions==methods

        double modul(){
            double res;
            res = real*real + imag*imag;
            return res;
        }

        void rotate90(){
            double temp= real;
    
            real = imag;
            imag = -temp;
        }


        void show()
        {
            printf("z=%.0lf+i*%.0lf\n", real, imag);
        }
        
        // функции доступа
        double& re() 
        { 
            return real; 
        }
        double im() { return imag; }
};      //  end of class complex


int main()
{
    int x;
    // complex z0;
    complex z0(3, 4);
    z0.show();
    z0.re() = 5;
    z0.show();


    // printf("z=%.0lf+i*%.0lf\n", z0.real, z0.imag);
    // z0.show();
    // z0.rotate90();
    // z0.show();
    // printf("res=%.0lf\n", z0.modul());
    // z0.show();
    //z0.imag = 122.2;  -error!!
    //  complex::imag недоступно
    // complex z1(30, 40);   // 
    // z1.show();
    // complex z_copy(z1);
    // z_copy.show();
    // complex zqq(34);
    // zqq.show();
    // printf("modul=%lf\n", sqrt(z0.re()*z0.re() + z0.im()*z0.im()));
    // z0.re() = 123.4; z0.show();
}
```
