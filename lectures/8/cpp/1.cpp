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
    std::ofstream ofs; // ������� ������ ��� ������ � ����
    std::ifstream ifs; // ������� ������ ��� ������ �� �����

    ofs.open("ofs.dat"); // ��������� ���� ��� ������ (���� ����� ���, �� ����� ������)
    ifs.open("ifs.dat"); // ��������� ���� ��� ������ (���� ����� ���, �� �� �� ����� ������)

    cout << (ofs.is_open() ? "���� ofs.dat ������" : "������ �������� ����� ofs.dat") << endl;
    cout << (ifs.is_open() ? "���� ifs.dat ������" : "������ �������� ����� ifs.dat") << endl; // ����� �� ����������

    ofs.close();
    ifs.close();

    // int age = 17;

    // std::string access = (age >= 18) ? "������ ��������" 
    // : "������ ��������";

    // if (ofs.is_open()) {
    //     ofs.close();
    // }
    // if (ifs.is_open()) {
    //     ifs.close();
    // }
    
    return 0;
}