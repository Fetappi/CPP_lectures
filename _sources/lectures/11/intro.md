# Экзаменнационный код для проверки знаний Шаблонов и STL

Вам необходимо понимать каждую строчку кода ниже и уметь отвечать на [вопросы](test_questions)

(test_code)=

```c++
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm> // sort, copy, remove_if
using namespace std;

// --- 1. Шаблонная функция с одним параметром

template <typename T>
void i_am_doing_smt(T element) {
    cout << "I am doing " element << endl;
}

template <typename T>
void printElement(const T& element) {
    cout << element << " ";
}

// --- 2. Шаблонная функция с несколькими параметрами
template <typename T, typename U>
void printPair(const T& first, const U& second) {
    cout << "(" << first << ", " << second << ") ";
}

// --- 3. Перегрузка шаблонной функции (другая сигнатура)
template <typename T>
void printElement(const vector<T>& vec) {
    for (const auto& el : vec)
        cout << el << " ";
    cout << endl;
}

// --- 4. Шаблонный класс
template <typename T>
class MyContainer {
private:
    vector<T> data;
public:
    void add(const T& value) {
        data.push_back(value);
    }
    void printAll() const {
        for (const auto& el : data)
            cout << el << " ";
        cout << endl;
    }

    // Метод шаблонного класса (фильтрация элементов)
    void removeIfGreaterThan(const T& threshold) {
        auto it = remove_if(data.begin(), data.end(), [threshold](const T& val) {
            return val > threshold;  // --- Лямбда-функция
        });
        data.erase(it, data.end()); // --- erase + remove_if
    }

    typename vector<T>::iterator begin() { return data.begin(); }
    typename vector<T>::iterator end() { return data.end(); }
};

int main() {
    // --- Работа с vector
    vector<int> numbers = {5, 2, 9, 1, 7};
    cout << "Vector before sort: ";
    printElement(numbers); // Вызов перегруженной шаблонной функции

    sort(numbers.begin(), numbers.end());
    cout << "Vector after sort: ";
    printElement(numbers);

    // --- Работа с list и copy
    list<int> numList;
    copy(numbers.begin(), numbers.end(), back_inserter(numList)); // copy

    cout << "List contents (copied from vector): ";
    for (auto it = numList.begin(); it != numList.end(); ++it)
        printElement(*it); // Вызов шаблонной функции с одним параметром
    cout << endl;

    // --- Работа с map
    map<string, int> wordCounts;
    wordCounts["apple"] = 3;
    wordCounts["banana"] = 5;
    wordCounts["orange"] = 2;

    cout << "Map contents: ";
    for (const auto& pair : wordCounts)
        printPair(pair.first, pair.second); // Вызов шаблонной функции с двумя параметрами
    cout << endl;

    // --- Работа с шаблонным классом
    MyContainer<int> container;
    container.add(10);
    container.add(20);
    container.add(5);
    container.add(15);

    cout << "MyContainer contents: ";
    container.printAll();

    container.removeIfGreaterThan(12); // Лямбда-функция, remove_if, erase
    cout << "MyContainer after removeIfGreaterThan(12): ";
    container.printAll();

    // --- Лямбда функции
    auto sum = [](int a, int b) {
    return a + b;
    };

    int a = 5;
    int b = 3;
    std::cout << "Sum: " << sum(a, b) << std::endl; // выведет: Sum: 8

    std::vector<int> data = {5, 1, 4, 2, 3};
    std::sort(data.begin(), data.end(), [](int a, int b) {
        return a > b;
    });


    return 0;
}

```
