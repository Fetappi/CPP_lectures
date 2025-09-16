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
        
        virtual void feed() = 0; // Чистая виртуальная функция для кормления

        virtual void cleaning(){
            std::cout << "Animal: cleaning\n";
        }
    };
    
    // Класс льва
    class Lion : public Animal {
    public:
        void feed() override {
            std::cout << "Кормим льва мясом\n";
        }

        void cleaning() override {
            std::cout << "Lion: cleaning\n";
        }
        ~Lion() {cout << "Lion deleted" << endl;}
    };
    
    // Класс обезьяны
    class Monkey : public Animal {
    public:
        void feed() override {
            std::cout << "Кормим обезьяну фруктами\n";
        }
        
        void cleaning() override {
            std::cout << "Monkey: cleaning\n";
        }
    };

    class Dog : public Animal {
    public:
        void feed() override final{
            std::cout << "Кормим собаку костями\n";
        }
    };

    class Chihuahua : public Dog {
    public:
        // void feed() {
        //     std::cout << "Кормим чихуахуа кормом\n";
        // }  

        // void feed(int a) {
        //     std::cout << "Кормим чихуахуа кормом\n";
        // }  
    };
    
    // Основная функция
    int main() {
        // // Создаем массив указателей на базовый класс
        Animal* animals[3];
        
        // Из базового класса создаем объекты дочерних классов
        animals[0] = new Lion;
        animals[1] = new Monkey;
        animals[2] = new Dog;
    
        // // Кормим всех животных
        for (Animal* animal : animals) {
            animal->feed();
        }
        
        // // Чистим всех животных
        // for (Animal* animal : animals) {
        //     animal->cleaning();
        // }
    
        // // Освобождаем память
        // for (Animal* animal : animals) {
        //     delete animal;
        // }



        /////////////////////////////////
        Animal *ptr_animal = new Lion;
        delete ptr_animal;
    
        return 0;
    }