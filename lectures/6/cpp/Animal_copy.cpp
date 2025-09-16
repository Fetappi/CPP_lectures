#include<iostream>
#include<string>
#include<string.h>
using std::cout;
using std::endl;

// ������ ����� ����⭮��
class Animal {
    public:
        // ����㠫�� �������� ��� �ࠢ��쭮�� 㤠�����
        virtual ~Animal() 
        {
            cout << "Animal deleted" << endl;
        }
        
        virtual void feed(){
            std::cout << "Animal: feed\n";
        }

        Animal() {cout << "Animal created" << endl;}
        
    };
    
    // ����� �좠
    class Lion : public Animal {
    public:
        virtual void feed() override {
            std::cout << "��ନ� �좠 ��ᮬ\n";
        }

        // virtual void feed(int count_meat) override {
        //     std::cout << "��ନ� �좠 ��ᮬ\n";
        // }

        ~Lion() {cout << "Lion deleted" << endl;}

        Lion() {cout << "Lion created" << endl;}
    };
    
    // �᭮���� �㭪��
    int main() {

        Animal *ptr_animal = new Lion;
        
        ptr_animal->feed();

        delete ptr_animal;
    
        return 0;
    }