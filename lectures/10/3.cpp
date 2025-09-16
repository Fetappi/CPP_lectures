#include <iostream>
#include <map>
#include <vector>


// Словари (map)
int main() {
    // std::map<std::string, int> fruitCount = {{"apple", 2}, {"banana", 5}};

    std::map<std::string, std::vector<int>> fruitCount = {{"apple", {1, 2}}, {"banana", {3,4}}};

    std::cout << fruitCount["apple"][0];


    // fruitCount["orange"] = 4; // Добавляем новую пару ключ-значение

    // // доступ к элементам
    // std::cout << "Apples: " << fruitCount["apple"] << std::endl;

    // // итерация по map
    // for(const auto& pair : fruitCount) {
    //     std::cout << pair.first << ": " << pair.second << std::endl;
    // }

    return 0;
}