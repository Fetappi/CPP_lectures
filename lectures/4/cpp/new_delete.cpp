#include <iostream>
#include <string>
using namespace std;
#define BIG_NUMBER 10000000000LL

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


// функция, создающая массив "точек" заданного объема N
CPoint * CreatePtArray( int N )
{
    CPoint * pPoint;
    pPoint = new CPoint [N];    // создание массива переменной длины
                                // явно будут вызваны N конструкторов по умолчанию

    return pPoint;  // возврат адреса созданного массива
                    // неявного вызова деструкторов не будет, так как уничтожается только
                    // переменная-указатель, а не весь массив.
}

int main()
{

    int * a = new int(5); // выделение памяти под одну переменную типа int и инициализация ее значением 5
    // int * a = new int; // выделение памяти под одну переменную типа int и инициализация ее значением 0
    // int * a = new int[BIG_NUMBER]; // ошибка, не хватит памяти

    // Не обязательно спрашивать не буду
    if (a != NULL) // NULL - константа, обозначающая нулевой указатель
    {
        cout << *a << endl;
    }
    delete a; // уничтожение переменной, на которую указывает указатель

    // использование массива переменной длины
    int nDim=10;

    // CPoint * pPtArray; // объявление указателя на массив "точек"
    // pPtArray = CreatePtArray( nDim ); // создание массива "точек" заданного объема с помощью функции выше
    
    CPoint * pPtArray = new CPoint [nDim];  // инициализация массива переменной длины
                                            // явно будут вызваны N конструкторов по умолчанию
    
    // оператор new может вернуть NULL, при нехватке памяти
    if( pPtArray != NULL ) 
    {
        for( int i=0 ; i<nDim ; i++ ) 
        {
            pPtArray[i].Set(i,i); // инициализация массива
        }
    }

    delete [] pPtArray; // [] - означают уничтожение массива
}