#include <iostream>
#include <stdio.h>
using namespace std;



int main()
{

    // int d = 10;
    // cout << "d = " << d << endl;
    // int& lnk_d = d;  // ссылка с именем lnk_d на переменную d

    // int& lnk_d2 {d};
    // int& lnk_d3 (d);

    // lnk_d = 5;  // переменная d = 5
    // cout << "d = " << d << endl;
    // d = -1;     // ссылка lnk_d связана со значением -1
    // cout << "d = " << d << endl;
    // lnk_d *= 10; // значение d увеличено в 10 раз
    // cout << "d = " << d << endl;
    // lnk_d++;  // инкремент переменной d
    // cout << "d = " << d << endl;


    // cout << "d = " << d << endl;
    // cout << "lnk_d = " << lnk_d << endl;
    // double d1;
    // double& alias_d = d1;

    int a = 10;
    // cout << &a << endl;
    int *ptr = &a;
    // cout << &ptr <<endl<< ptr << endl;
    int ar[] = {1, 2, 3};
    // cout << *(ar + 1)<< endl << ar[1];
    int& lnk_1 = a;        // ok
    int& lnk_2 = *ptr;    // ok
    int& lnk_3 = ar[1];   // ok
    // int& lnk_4 = 10;  // ошибка
    // int& lnk_5 = ptr;  // ошибка



}