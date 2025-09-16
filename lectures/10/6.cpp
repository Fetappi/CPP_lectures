#include <algorithm>
#include <vector>
#include <iostream> 
#include <functional>  // для std::greater

bool cmp(int a, int b) {
    return a > b;
}

// Сортировка (sort)
int main() {
    std::vector<int> data = {5, 1, 4, 2, 3};

    std::sort(data.begin(), data.end());
    std::reverse(data.begin(), data.end());

    std::sort(data.begin(), data.end(), cmp);

    std::sort(data.begin(), data.end(), [](int a, int b) {
        return a > b;
    });

    std::sort(data.begin(), data.end(), std::greater<int>());

    // template <class T> struct greater {
    //     bool operator()(const T& a, const T& b) const {
    //         return a > b;
    //     }
    // };
    

    for (int n : data) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}