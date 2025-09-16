#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
 
using std::cout;
using std::cin;
using std::endl;
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::ofstream ofs; // создаем объект для записи в файл
    std::ifstream ifs; // создаем объект для чтения из файла

    ofs.open("ofs.dat"); // открываем файл для записи (если файла нет, он будет создан)
    ifs.open("ifs.dat"); // открываем файл для чтения (если файла нет, то он не будет создан)

    cout << (ofs.is_open() ? "Файл ofs.dat открыт" : "Ошибка открытия файла ofs.dat") << endl;
    cout << (ifs.is_open() ? "Файл ifs.dat открыт" : "Ошибка открытия файла ifs.dat") << endl; // файла не существует

    ofs.close();
    ifs.close();

    // int age = 17;

    // std::string access = (age >= 18) ? "Доступ разрешен" 
    // : "Доступ запрещен";

    // if (ofs.is_open()) {
    //     ofs.close();
    // }
    // if (ifs.is_open()) {
    //     ifs.close();
    // }
    
    return 0;
}