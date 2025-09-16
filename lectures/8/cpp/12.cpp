#include <iostream>
#include <exception>
#include <Windows.h>
#include <string>
#include <fstream>

void load_data(const char* path, int& x)
{
    std::ifstream ifs;
    ifs.exceptions( std::ios::failbit ); // для включения генерации исключений, failbit - ошибка открытия файла, badbit - ошибка чтения файла
    // ifs.exceptions - включает генерацию исключений для всех потоков, которые будут открыты после вызова этой функции.
    // ifs.exceptions( std::ios::badbit | std::ios::failbit ); // для включения генерации исключений, badbit - ошибка чтения файла, failbit - ошибка открытия файла
 
    try {
        ifs.open(path);
        ifs >> x;
        ifs.close();
    }
    catch(...) {
        ifs.close();
        throw;
    }
}

int main()
{
    int data {0};
 
    try {
        load_data("123", data);
        std::cout << data << std::endl;
    }
    catch(const std::exception & ex) {
        std::cout << "Error read data from file." << std::endl;
        std::cout << ex.what() << std::endl; // выводит текст ошибки, которая произошла при чтении файла.
        // ex.what() - это метод класса std::exception, который возвращает текстовое сообщение об ошибке.
    }
    // const std::exception & ex - это ссылка на объект исключения, который был выброшен.
    // Если вы хотите получить доступ к объекту исключения, то нужно использовать ссылку на него.
 
    return 0;
}