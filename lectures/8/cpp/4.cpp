#include <iostream>
#include <fstream>
#include <Windows.h>
 
using std::cout;
using std::cin;
using std::endl;
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ------------- чтение данных из файла --------------------------------
    int data_i1{}, data_i2 {};
    double data_d1 {};

    cout << data_i1 << " " << data_d1 << " " << data_i2 << std::endl;
 
    std::ifstream ifs("out_course.dat");
    
    // if(ifs.is_open()) {
    //     ifs >> data_i1 >> data_d1 >> data_i2;
    // }

    //некорректное чтение
    if(ifs.is_open()) {
        ifs >> data_i1 >> data_i2 >> data_d1;
    }
    std::cout << data_i1 << " " << data_d1 << " " << data_i2 << std::endl;
 
    ifs.close();            // закрытие файла
 
    return 0;
}