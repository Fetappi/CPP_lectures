#include <iostream>
#include <string>
#include "Cpoint.cpp"
using namespace std;

int get_y(const massiv_point & p, int index)
{
    return p[index].y;  // вызов константного оператора []
                        // Это пример, когда необходимо использовать константный оператор []
                        // Так называемый правый оператор []
                        // так как объект p является константным
}

int main()
{

    massiv_point test(2);
    test.set_from_console();

    cout << get_y(test, 1) << endl;
    test[0].x = 5;

    int v = test[1].x;
    cout << "----------------------------"<< endl;
    cout << "----------------------------"<< endl;
    cout << v << endl;

    cout << test[0].x << " " << test[0].y << endl;

    test.insert(1, CPoint(-1, -1));

    cout << "----------------------------"<< endl;
    for (int i = 0 ; i < test.size; i++)
    {
        cout << test[i].x << " " << test[i].y << endl;
    }
    cout << "----------------------------"<< endl;


}