#include <iostream>
#include <list>

// Списки (list)
int main() {
    std::list<int> numbers = {1, 2, 3, 3, 4, 5};
    numbers.push_front(0); // добавляем элемент в начало списка


    // удаление элемента
    numbers.remove(3);

    // итерация по list
    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}