#include<iostream>
#include<string>
#include<string.h>
using std::cout;
using std::endl;

// Базовый класс животного
class Animal {
    public:
        // Виртуальный деструктор для правильного удаления
        virtual ~Animal() 
        {
            cout << "Animal deleted" << endl;
        }
        
        virtual void feed(){
            std::cout << "Animal: feed\n";
        }

        Animal() {cout << "Animal created" << endl;}
        
    };
    
    // Класс льва
    class Lion : public Animal {
    public:
        virtual void feed() override {
            std::cout << "Кормим льва мясом\n";
        }

        // virtual void feed(int count_meat) override {
        //     std::cout << "Кормим льва мясом\n";
        // }

        ~Lion() {cout << "Lion deleted" << endl;}

        Lion() {cout << "Lion created" << endl;}
    };
    
    // Основная функция
    int main() {

        Animal *ptr_animal = new Lion;
        
        ptr_animal->feed();

        delete ptr_animal;
    
        return 0;
    }