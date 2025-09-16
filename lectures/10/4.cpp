#include <iostream>
#include <vector>

using std::cout;
using std::endl;

// Итераторы
int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6); // добавляем элемент в конец

    auto it = numbers.begin(); // возвращает итератор на первый элемент
    cout << "First element: " << *it << std::endl; // разыменование итератора
    cout << "Second element: " << *(++it) << std::endl; // разыменование итератора с инкрементом
    cout << "Third element: " << *(it + 1) << std::endl; // разыменование итератора с арифметикой

    cout << endl; // перевод строки

    it = numbers.begin();
    for ( ; it != numbers.end(); ++it) {
        cout << *it << " "; // разыменование итератора
    }
    cout << endl;

    cout << *--it << endl; // разыменование итератора с декрементом
    cout << *(it - 1) << endl; // разыменование итератора с арифметикой
    cout << "Last element: " << *(--numbers.end()) << endl;

    return 0;
}