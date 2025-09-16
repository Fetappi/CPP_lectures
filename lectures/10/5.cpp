#include <algorithm>
#include <vector>
#include <iostream>

// find
int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    auto it = std::find(data.begin(), data.end(), 3);
    if (it != data.end()) {
        std::cout << "Found: " << *it << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
    return 0;
}