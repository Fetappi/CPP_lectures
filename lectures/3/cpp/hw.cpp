#include <iostream>
#include <string>
#include "Cpoint.h"
using namespace std;


int main()
{

    massiv_point test(2);
    test.set_from_console();

    // int v = test[1].x;
    // cout << v << endl;

    // cout << test[0].x << " " << test[0].y << endl;

    test.insert(1, CPoint(-1, -1));

    cout << "----------------------------"<< endl;
    for (int i = 0 ; i < test.size; i++)
    {
        cout << test[i].x << " " << test[i].y << endl;
    }
    cout << "----------------------------"<< endl;


}