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
    
    std::ofstream ofs("out_course.txt");    // открытие файла

    // для записи базового типа данных
    if(ofs.is_open()) {
        ofs << 10 << " " << -5.34 << " " << -34 << std::endl;
    }

    
    if (ofs.is_open()) {
        ofs.close();
    }
    
    return 0;
}