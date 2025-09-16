#include <iostream>
#include <exception>
#include <Windows.h>
#include <string>


int perimetr_tr(int a, int b, int c)
{
    if(a < 0 || b < 0 || c < 0)
        throw -1;
 
    if(a > b+c || b > a+c || c > a+b)
        throw "Error: a, b, c are not triangle lengths";
 
    return a+b+c;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    try {
        int p = perimetr_tr(-5, 1, 2);
    }
    catch(const char* e) {
        std::cout << e << std::endl;
    }
    // catch(int) {
    //     std::cout << "Lengths must be positive digitals." << std::endl;
    // }
    catch(int i) {
        std::cout << "Code error = " << i << std::endl;
    }
    // � ����� ���������� ������ ���� catch, � ������ ����� ��������������. 
    // ������ ����� ��������������� � ������� �� ������: ������� ��� ������, 
    // � �����, ��� ������ ���� int. ��������� ����� ������ ���� �� ��� (��� �� ������). 
    // ��� ������ �����-���� ���� catch ������������, ��� ����������� ����� ������������ (������������). 
    // ���� ���������� �� ���� ������� �� ����� �� ������, �� ��� �������������� ������ �� ����� ������ �������.

    return 0;
}