#include <iostream>
using namespace std;

int main()
{
    // int val = 0;  // инициализация
    // int pow[] = {1, 2, 4, 8};
    
    // int sh = 10;
    // int sh1{10};   // functional notation функциональная нотация
    // int sh2('a');
    // cout << sh1 << endl << sh2 << endl;

    // long double d{10.224343535};
    // cout << d << endl;
 
    // char ch{'b'};   // braced initialization согласованная инициализация
    // long lv{};

    // cout << sh << " " << d << endl;
    // cout << ch << " " << lv << endl;

    // int iv{5.43};//Ошибка несоответствия типов
    // // int iv(5.43);
    // cout << iv << endl;


    int sum {2 + 3 + 4 + 5};
    double p (1 * 2.3 * 4.5 - 1);
    bool n_fl(false), t_fl(true);

    auto i = -100;      // тип int
    auto d = 76.98;     // тип double
    auto g = 0.55f;     // тип float
    auto h = 'f';       // тип char

    auto i = 1 + 2 - 10;      // тип int
    auto d = 1 + i + 3.0;     // тип double
    auto g = 55u;     // тип unsigned int
    auto h = (short)10 + 100000UL;       // тип unsigned long

    return 0;

}