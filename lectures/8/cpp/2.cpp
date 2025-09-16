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

    // ios::in – для чтения (только для объектов классов ifstream или fstream);
    // ios::out – для записи; прежние данные удаляются (только для объектов классов ofstream или fstream);
    // ios::app – для дозаписи; прежние данные не удаляются;
    // ios::ate – при открытии указатель файла смещается в конец;
    // ios::binary – открытие файла в бинарном режиме доступа.
    // ios::trunc – при открытии файла он очищается (по умолчанию);
    // ios::nocreate – файл не должен существовать (только для объектов классов ofstream или fstream);
    // ios::noreplace – файл не должен существовать (только для объектов классов ifstream или fstream);

    using std::ios; // подключаем пространство имен для работы с потоками ввода-вывода
    std::ofstream ofs; // создаем объект для записи в файл
    std::ifstream ifs("ifs.dat", ios::app); // создаем объект для чтения из файла, открываем файл в режиме дозаписи

    ofs.open("ofs.dat"); // открываем файл для записи (если файла нет, он будет создан)
    // ifs.open("ifs.dat"); 


    // Пример комбинирования флагов:
    std::ofstream ofs("ofs.dat", ios::out | ios::binary); // открываем файл для записи в бинарном режиме
    std::ifstream ifs("ifs.dat", ios::app | ios::binary); // открываем файл для чтения в бинарном режиме, открываем файл в режиме дозаписи


    if (ofs.is_open()) {
        ofs.close();
    }
    if (ifs.is_open()) {
        ifs.close();
    }
    
    return 0;
}