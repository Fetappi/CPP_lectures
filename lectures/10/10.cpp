#include <algorithm>
#include <vector>
#include <iostream>

void show(std::vector<int> v) {
    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    

    std::vector<int> v = {1, 2, 3, 4};
    v.erase(v.begin() + 2); // удалит элемент 3
    show(v); // 1 2 4

    // удаление диапазона элементов
    v = {1, 2, 3, 4};
    v.erase(v.begin() + 1, v.begin() + 3); // удалит 2 и 3
    show(v); // 1 4


    std::vector<int> data = {1, 2, 3, 4, 5, 6};
    auto newEnd = std::remove_if(data.begin(), data.end(),
                                 [](int x) { return x % 2 == 0; });    
    show(data); // 1 2 3 4 5 6                                                
    // не удаляет элементы, а переставляет их: все элементы, которые не попали под условие, перемещаются в начало контейнера, а "мусор" остаётся в конце.
    data.erase(newEnd, data.end());
    for (int n : data) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}