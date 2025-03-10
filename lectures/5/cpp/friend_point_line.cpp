#include<iostream>
using namespace std;

class line2;
class point2
{
    float x, y;
public:
    point2(float xi, float yi): x(xi), y(yi)
        {}
    void display();
    friend float dist(point2, line2);
};

// :: оператор разрешения области видимости
void point2::display()
{
    cout << "x = " << x << " y = " << y << endl;
}

class line2
{
    float a, b, c;
public:
    line2(float ai, float bi, float ci): a(ai), b(bi), c(ci)
        {}
    void display()
    {
        cout << "a = " << a << " b = " << b << " c = " << c << endl;
    }
    friend float dist(point2, line2);
};

float dist(point2 p, line2 l)
{
    return l.a * p.x + l.b * p.y + l.c;
}

int main()
{
    point2 A(1, 2);
    line2 L(1, 1, 0);
    cout << "dist = " << dist(A, L) << endl;
    A.display();
    L.display();
    system("pause"); // ожидание нажатия клавиши
    return 0;

    
}