#ifndef _Cpoint_h
#define _Cpoint_h

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class CPoint 
{ // описание класса “точка”
    public:
        int x, y; // координаты точки
        
        ~CPoint() // деструктор
        { 
            cout << "Я уничтожил: " << x << " " << y << endl << endl; 
        } 

        void Set( int newX=0, int newY=0 ) // установка значений
        { 
            x=newX;
            y=newY; 
        } 

        CPoint( int newX=0, int newY=0 ) // конструктор
        { 
            Set(newX,newY); 
        } 
};

class massiv_point
{
    CPoint * pPoint;
    

    public:
        int size;

        massiv_point(int size = 10)
        {
            this->size = size;
            pPoint = new CPoint [size];
            
            if (pPoint == NULL)
            {
                cout << "Error!" << endl;
            }
        }

        ~massiv_point()
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
            cout << "----------------------------"<< endl;
        }

        CPoint & operator [] (int index)
        {
            return pPoint[index];
        }

        void insert(int index, CPoint point)
        {   
            CPoint * temp = new CPoint [size + 1];
            for (int i = 0; i < index; i++)
            {
                temp[i] = pPoint[i];
            }

            temp[index] = point;

            for (int i = index + 1; i < size + 1; i++)
            {
                temp[i] = pPoint[i - 1];
            }

            size += 1;
            pPoint = temp;
        }

};


#endif