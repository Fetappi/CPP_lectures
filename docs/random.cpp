#include <iostream>
// #include <cstdlib>
// #include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    int randNum = rand() % 100; // 0-99
    int randNum2 = rand(); // 0-32767 
    double randNum3 = (double)rand() / RAND_MAX; // 0-1
    double randNum4 = (double)rand() / RAND_MAX * 100; // 0-100


    int max = 50;
    int min = 100;
    int randNum5 = rand() % (max - min + 1) + min; // 50-100
    double randNum6 = (double)rand() / RAND_MAX * (max - min) + min; // 50-100

    cout << randNum6 << endl;

    return 0;
}