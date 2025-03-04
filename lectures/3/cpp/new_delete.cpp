#include <iostream>
#include <string>
using namespace std;

class CPoint 
{ // описание класса “точка”
    public:
        int x, y; // координаты точки
        
        ~CPoint() // деструктор
        { 
            cout << "Я уничтожил: " << x << " " << y << endl; 
        } 

        void Set( int newX=0, int newY=0 ) // установка значений
        { 
            x=newX, y=newY; 
        } 

        CPoint( int newX=0, int newY=0 ) // конструктор
        { 
            Set(newX,newY); 
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

    // int * a = new int(5);
    // if (a != NULL)
    // {
    //     cout << *a << endl;
    // }
    // delete a;

    // // использование массива переменной длины
    // int nDim=10;
    // CPoint * pPtArray;

    // pPtArray = CreatePtArray( nDim );
    // // оператор new может вернуть NULL, при нехватке памяти
    // if( pPtArray != NULL ) 
    // {
    //     for( int i=0 ; i<nDim ; i++ ) 
    //     {
    //         pPtArray[i].Set(i,i); // инициализация массива
    //     }
    // }

    // delete [] pPtArray; // [] - означают уничтожение массива
}