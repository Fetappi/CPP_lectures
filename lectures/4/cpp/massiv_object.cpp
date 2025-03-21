#include <iostream>
#include <string>
using namespace std;

class CPoint 
{ // описание класса “точка”
    public:
        int x, y; // координаты точки

        CPoint( int newX=0, int newY=0 ) // конструктор
        { 
            Set(newX,newY); 
        } 

        ~CPoint() // деструктор
        { 
            cout << "Я уничтожил: " << x << " " << y << endl; 
        } 

        void Set( int newX=0, int newY=0 ) // установка значений
        { 
            x=newX, y=newY; 
        } 

        void Set_from_console() // установка значений
        { 
            cout << "Enter x: ";
            cin >> x;
            cout << endl << "Enter y: ";
            cin >> y;
            cout << endl;
        } 

 
};

int main() 
{
    const int N=12;     // объявление константы, задающей размерность массива
    CPoint PtArray[N];  // объявление массива объектов - “точек”
                        // здесь неявно будут вызваны конструкторы “точек”

    for (CPoint & pt: PtArray)
    {
        pt.Set(0,0); 
        cout << pt.x << " " << pt.y << endl;
    }

    CPoint * pPoint;    // объявление указателя на “точку”

    // доступ по индексу
    PtArray[3].Set(12,24); // установка новых значений 3-го элемента
    PtArray[4].x=15, PtArray[4].y=28; // изменение 4-го элемента
    
    // доступ по адресу
    pPoint = PtArray + 5; // получение адреса 5-го элемента
    // то же самое что и если бы мы написали pPoint = &PtArray[5];
    // напоминание PtArray[5] = *(PtArray + 5) 

    pPoint->x = 16; pPoint->y = 32; // изменение 5-го элемента
    // аналогично (*pPoint).x = 16; (*pPoint).y = 32;

    pPoint += 4; // получение адреса 9-го элемента
    //аналогично pPoint = pPoint + 4;

    pPoint->Set(2,2); // установка новых значений 9-го элемента
    // аналогично (*pPoint).Set(2,2);

// здесь перед выходом из области видимости будут вызываться деструкторы
}
    