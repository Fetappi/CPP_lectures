#include<conio.h>
#include<iostream>
using namespace std;

class point_name
{
    int x{0}, y{0}; // инициализация полей класса
    char cc{'c'};   // инициализация только при создании объекта класса
                    // здесь же происходит их объявление, шаблон
    friend void change_name(point_name *, char); //неважно где объявлено, прототип
    friend void change_name(point_name &, char); 
public:
    point_name(int xi, int yi, char ci): x(xi), y(yi), cc(ci) // список инициализации
        {}
    void display()
    {
        cout << "x = " << x << " y = " << y << " cc = " << cc << endl;
    }
};

void change_name(point_name * p, char c)
{
    p->cc = c;// аналогично (*p).cc = c;
    // p.cc = c;
}

void change_name(point_name & p, char c)
{
    // p->cc = c;// аналогично (*p).cc = c;
    p.cc = c;
}

int main()
{
    // point_name O; // ошибка: нет конструктора по умолчанию
    // O.display();

    point_name D(20, 4, 'd'), S(10, 10, 's');
    D.display(); getch(); // ожидание нажатия клавиши
    S.display(); getch();
    change_name(&D, '*'); // изменение значения поля cc объекта D
    D.display(); getch();
    change_name(S, '#'); // изменение значения поля cc объекта S
    S.display(); getch();
    return 0;

}