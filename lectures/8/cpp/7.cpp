#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
 
using std::cout;
using std::cin;
using std::endl;
using std::ios;

struct person {
    char fio[100];
    short old;
    unsigned int salary;
    double weight;
};
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   

    struct person ps[] {{"Artem Shishkin", 102, 1000001, 82.6},
                        {"Bjarne Stroustrup", 56, 100001, 78.2},
                        {"Dennis Ritchie", 62, 10001, 88.9},
                        {"Kenneth Thompson", 58, 10002, 75.3},
                    };
 
    std::ofstream ofs("out_course.dat", ios::out | ios::binary); 
    ofs.write((char *)&ps[0], sizeof(ps[0])); 
 
    // if(ofs.is_open()) {
    //     for(auto& p : ps) // вместо auto& можно использовать struct person& p
    //         ofs.write((char *)&p, sizeof(p)); 
    // }
 
    ofs.close();
 
    // ------------- чтение данных из файла --------------------------------
    struct person ps_r[10];
    int count = 0;
 
    std::ifstream ifs("out_course.dat", ios::in | ios::binary);
 
    if(ifs.is_open()) {
        while(ifs.read((char *)&ps_r[count], sizeof(person))) {
            count++;
        }
    }
 
    ifs.close();
 
    std::cout << count << std::endl;
    for(int i = 0; i < count; ++i) {
        std::cout << ps_r[i].fio << endl;
        std::cout << ps_r[i].old << " " << ps_r[i].salary << " " << ps_r[i].weight << endl;
    }

    return 0;
}


