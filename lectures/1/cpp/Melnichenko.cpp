#include <stdio.h> 
#include <math.h> 
#include <iostream>
using namespace std; 
 
class ellipse 
{ 
    double a,b,c; 
 
public: 
    // constructors 
    ellipse(double x, double y) 
    { 
        a = x; 
        b = y; 
        c = (sqrt(a*a - b*b)); 
         
    } 
    ellipse() // default conctructor should be only one 
    { 
        printf("Input a, b:"); 
        // scanf("%lf%lf", &a, &b); 
        cin>>a>>b;
        c = (sqrt(a*a - b*b)); 
    } 
    ellipse(ellipse &zc) // copy constructor 
    { 
        a = zc.a; 
        b = zc.b; 
        c = (sqrt(a*a - b*b)); 
    } 
     
     
 
    double eccentricity() 
    { 
        double res; 
        res = c/a; 
        return res; 
         
    } 
 
    void rotate90() 
    { 
        double temp = a; 
        a=b; 
        b=temp; 
 
    } 
 
    void show() 
    { 
        printf("a=%lf, b=%lf,c=%lf\n", a,b,c); 
    } 
    // функции доступа 
    double A() 
    { 
        return a; 
    } 
    double B() { return b; } 
}; //  end of class ellipse 
 
int main() 
{ 
     
     
    ellipse e0(4, 3); 
    ellipse e1(e0); 
     
    e0.show(); 
    printf("eccentricity=%.0lf\n",e0.eccentricity()); 
    e0.rotate90(); 
    e0.show(); 
     
    e1.show(); 
 
    return 0;
}