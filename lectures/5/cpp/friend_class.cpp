#include<iostream>
#include <math.h>
using namespace std;

class pointN // класс точки в N-мерном пространстве
{
    int point_size;
    double *x;
    friend class vectorN; // объявление дружественного класса
public:
    pointN(int n, double d); //объявление конструктора, реализация которого ниже
    ~pointN() {delete [] x;}
};

pointN::pointN(int n, double d) // реализация конструктора
{
    point_size = n;
    x = new double[point_size];
    for (int i = 0; i < point_size; i++)
        x[i] = d;
}

class vectorN // класс вектора в N-мерном пространстве
{
    int vector_size;
    double *xv;
public:
    vectorN(pointN beg, pointN end)
    {
        if (beg.point_size != end.point_size)
        {
            cout << "Error: different sizes of points" << endl;
            exit(1);
        }
        vector_size = beg.point_size;
        xv = new double[vector_size];   
        for (int i = 0; i < vector_size; i++)
            xv[i] = end.x[i] - beg.x[i]; //координаты вектора
    }
    ~vectorN() {delete [] xv;}

    double norm(); // объявление метода класса
};

double vectorN::norm() // реализация метода класса
// метод класса, который вычисляет норму вектора
{
    double sum = 0;
    for (int i = 0; i < vector_size; i++)
        sum += xv[i] * xv[i];
    return sqrt(sum);
}

int main()
{
    pointN A(3, 1), B(3, 4), X(2, 2); 
    vectorN V(A, B);
    cout << "Norm = " << V.norm() << endl;
    vectorN Z(A, X);
    cout << "Norm = " << Z.norm() << endl;
    return 0;
}



