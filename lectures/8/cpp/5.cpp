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

    std::ofstream ofs("out_course.dat");    // открытие файла
    
    if(ofs.is_open()) {
        ofs << 10 << " " << -5.34 << " " << -34 << "\n";
        ofs << "I'm Artem Shishkin" << std::endl;
    }

    ofs.close(); // закрываем файл, чтобы открыть его для чтения
 
    std::string str;
    int data_i1 {}, data_i2 {};
    double data_d1 {};

    std::ifstream ifs("out_course.dat"); 

    // if(ifs.is_open()) {
    //     ifs >> data_i1 >> data_d1 >> data_i2;
    //     // ifs >> str;
        
    //     std::getline(ifs, str); // указатель находится в конце строки, поэтому
    //     std::getline(ifs, str); // надо написать два раза

    // }

    if(ifs.is_open()) {
        ifs >> data_i1 >> data_d1 >> data_i2;
        str = "";
        while(str.length() == 0)
            std::getline(ifs, str);
    }

 
    std::cout << str << std::endl; // I'm -- вывод до пробела
    // при работе с строками, лучше пользоваться строками, а не статическими массивами
    // так мы точно не будем выходить за пределы массива

    // if (ofs.is_open()) {
    //     ofs.close();
    // }
    if (ifs.is_open()) {
        ifs.close();
    }
}
