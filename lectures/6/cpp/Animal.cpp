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
        
        virtual void feed() = 0; // ����� ����㠫쭠� �㭪�� ��� ��ଫ����

        virtual void cleaning(){
            std::cout << "Animal: cleaning\n";
        }
    };
    
    // ����� �좠
    class Lion : public Animal {
    public:
        void feed() override {
            std::cout << "��ନ� �좠 ��ᮬ\n";
        }

        void cleaning() override {
            std::cout << "Lion: cleaning\n";
        }
        ~Lion() {cout << "Lion deleted" << endl;}
    };
    
    // ����� �������
    class Monkey : public Animal {
    public:
        void feed() override {
            std::cout << "��ନ� ������� ���⠬�\n";
        }
        
        void cleaning() override {
            std::cout << "Monkey: cleaning\n";
        }
    };

    class Dog : public Animal {
    public:
        void feed() override final{
            std::cout << "��ନ� ᮡ��� ����ﬨ\n";
        }
    };

    class Chihuahua : public Dog {
    public:
        // void feed() {
        //     std::cout << "��ନ� ����� ��ମ�\n";
        // }  

        // void feed(int a) {
        //     std::cout << "��ନ� ����� ��ମ�\n";
        // }  
    };
    
    // �᭮���� �㭪��
    int main() {
        // // ������� ���ᨢ 㪠��⥫�� �� ������ �����
        Animal* animals[3];
        
        // �� �������� ����� ᮧ���� ��ꥪ�� ���୨� ����ᮢ
        animals[0] = new Lion;
        animals[1] = new Monkey;
        animals[2] = new Dog;
    
        // // ��ନ� ��� �������
        for (Animal* animal : animals) {
            animal->feed();
        }
        
        // // ���⨬ ��� �������
        // for (Animal* animal : animals) {
        //     animal->cleaning();
        // }
    
        // // �᢮������� ������
        // for (Animal* animal : animals) {
        //     delete animal;
        // }



        /////////////////////////////////
        Animal *ptr_animal = new Lion;
        delete ptr_animal;
    
        return 0;
    }