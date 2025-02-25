#include <iostream>
using namespace std;

int main()
{
    short old = 37;
    bool flg_old = false;
    
    cout << "Enter old: ";
    cin >> old;

    flg_old = old > 18;

    if (flg_old)
        cout << "You are old!" << endl;
    else
        cout << "You are young!" << endl;

    return 0;

}