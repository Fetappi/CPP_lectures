#include <iostream>
#include <exception>
#include <Windows.h>
#include <string>


int perimetr_tr(int a, int b, int c)
{
    try {
        if(a < 0 || b < 0 || c < 0)
            throw -1;
    }
    catch(int x) {
        std::cout << x << std::endl;
        return x;
    }
 
    if(a > b+c || b > a+c || c > a+b)
        throw "Error: a, b, c are not triangle lengths";
 
    return a+b+c;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    try {
        int p = perimetr_tr(5, 1, 2);
    }
    catch(const char* e) {
        std::cout << e << std::endl;
    }
    // catch(const std::exception & ex) {
    //     std::cout << "Code error = " << ex.what() << std::endl;
    // }
 

    return 0;
}