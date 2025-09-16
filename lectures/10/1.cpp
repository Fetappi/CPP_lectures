#include <iostream>
#include <vector>

using namespace std;
using std::cout;
using std::endl;

// Векторы (vector)
int main() {
    int mass[] = {1, 2, 3 ,4};
    std::vector numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6); // добавляем элемент в конец

    // доступ к элементам
    std::cout << "Third element: " << numbers[2] << std::endl;

    // итерация по vector
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    auto it = numbers.begin(); // возвращает итератор на первый элемент
    cout << "First element: " << *it << std::endl; // разыменование итератора
    cout << "Second element: " << *(++it) << std::endl; // разыменование итератора с инкрементом
    cout << "Third element: " << *(it + 1) << std::endl; // разыменование итератора с арифметикой

    return 0;
}