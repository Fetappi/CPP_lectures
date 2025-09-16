#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    std::rotate(data.begin(), data.begin() + 2, data.end()-1);
    for (int n : data) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}