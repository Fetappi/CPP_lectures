#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[100];
    string msg = "Hello";
    string name{"Hello"};
    cout << msg << endl <<  msg.size() << " " << msg.capacity() << endl;

    cin >> name;

    // msg.append(", World");
    // msg += "!";

    // string msg2 = msg + name;
    // cout << msg2 << endl;

    short old = 37;
    double x = 3.14;
    
    cout << "Enter old: ";
    cin >> old;
    cout << "Enter x: ";
    cin >> x;


    getline(cin, msg);
    getline(cin, msg, '!');
    cout <<endl << "--------------" << endl << msg << endl;

}
