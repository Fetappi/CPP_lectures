#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>

int main() {
    std::vector<int> src = {1, 2, 3, 4, 5};
    std::vector<double> dest(6, 0); // инициализация вектора dest с 6 элементами, равными 0

    for (int n : dest) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::copy(src.begin(), src.end(), dest.begin());
    for (int n : dest) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}