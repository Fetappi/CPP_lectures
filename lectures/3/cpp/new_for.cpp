#include <iostream>
#include <string>
using namespace std;

int main()
{
    int massiv[5] = {356, 23, 46, 4, 5};

    for (int & i: massiv)
    {
        i+=1;
    }
    for (int i: massiv)
    {
        cout << i << " ";
    }

    // string msg = "Hello"; 

    // for (char & i: msg)
    // {
    //     i+= 1;
    // }


    // for (char i: msg)
    // {
    //     cout << i << " ";
    // }

}