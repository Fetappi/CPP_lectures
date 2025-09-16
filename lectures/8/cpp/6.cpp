#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
 
using std::cout;
using std::cin;
using std::endl;
using std::ios;
 
int main()
{
    double pow[] {4.3, -54.33, 0.01};
 
    std::ofstream ofs("out_course.dat", ios::out | ios::binary);
 
    // if(ofs.is_open()) {
    //     ofs << pow; // запись в файл адреса массива
    // }

    if(ofs.is_open()) {
        ofs.write((char *)pow, sizeof(pow));
    }
    // Первым аргументом передается адрес области памяти, которая переносится в файл, 
    // а вторым аргументом – размер сохраняемого фрагмента. В нашем случае – это размер массива pow в байтах.
    ofs.close();

    // ------------- чтение данных из файла --------------------------------
    std::ifstream ifs("out_course.dat", ios::in | ios::binary);
    double read_pow[5] {0}; // создаем массив для чтения данных из файла

    if(ifs.is_open()) {
        ifs.read((char *)read_pow, sizeof(pow));
    }

    for (double val : read_pow) {
        cout << val << " "; // выводим массив на экран
    }
    
    
    ifs.close();
    return 0;
}


