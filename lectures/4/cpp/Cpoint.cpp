#ifndef _Cpoint_h
#define _Cpoint_h

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class CPoint 
{ // описание класса “точка”
    public:
    static unsigned count;
        int x, y; // координаты точки

        CPoint( int newX=0, int newY=0 ) // конструктор
        { 
            Set(newX,newY); 
            count++;
        } 

        ~CPoint() // деструктор
        { 
            cout << "I destroyed: " << x << " " << y << endl; 
            cout << "Count: " << count << endl << endl;
            count--;
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

unsigned  CPoint::count = 0;

class massiv_point
{
    CPoint * pPoint;
    
    public:
        int size;

        massiv_point(int size = 10) // конструктор
        {
            this->size = size; 
            // size = new_size;
            pPoint = new CPoint [size];
            
            if (pPoint == NULL)
            {
                cout << "Error!" << endl;
            }
        }

        ~massiv_point() // деструктор
        {
            delete [] pPoint;
        }

        void set_from_console()
        {
            for (int i = 0; i < size; i++)
            {   
                cout << "Enter x and y: ";
                int x, y;
                cin >> x >> y;
                pPoint[i].Set(x, y);
            }
            cout << "End set_from_console"<< endl;
            cout << "----------------------------"<< endl << endl;
        }

        CPoint & operator [] (int index) // перегрузка оператора [] для доступа к элементам массива по индексу
        {
            cout << "left" << endl;
            if (index < 0 || index >= size)
            {
                cout << "Error !" << endl;
                exit(1);
            }
            return pPoint[index];
        }

        CPoint operator [] (int index) const // реализация константного оператора []
            { 
                cout << "right" << endl;
                if (index < 0 || index >= size)
                {
                    cout << "Error!" << endl;
                    exit(1);
                }
                return pPoint[index]; 
            }


        void insert(int index, CPoint point)
        {   
            CPoint * temp = new CPoint [size + 1]; // создаем новый массив на 1 элемент больше
            for (int i = 0; i < index; i++) // копируем все элементы до индекса
            {
                temp[i] = pPoint[i];
            }

            temp[index] = point; // вставляем новый элемент

            for (int i = index + 1; i < size + 1; i++) // копируем все элементы после индекса
            {
                temp[i] = pPoint[i - 1];
            }

            size += 1;
            delete [] pPoint; // удаляем старый массив
            pPoint = temp; // присваиваем указателю pPoint адрес нового массива
            // delete [] temp; не нужно, так как pPoint теперь указывает на temp
            // а переменная temp уничтожится сама при выходе из функции
        }

};

#endif