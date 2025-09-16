#include <iostream>
#include <string>

template <typename T> 
T add(T a, T b) { puts("add: 1"); return a + b; }
 
template <typename T> 
T add(T* a, T* b) { puts("add: 2"); return *a + *b; }
 
template <typename T1, typename T2> 
auto add(T1 a, T2 b) { puts("add: 3"); return a + b; }
 
void add(std::string& dest, const std::string& src)
{
    puts("add: 4");
    dest.append(src);
}

int main()
{
    std::string str_1 {"Hello"}, str_2 {"World"};
    int a {0}, b{3};
 
    add(&a, &b);        // add: 2
    add(str_1, str_2);  // add: 4
    add<>(str_1, str_2);  // add: 1
    add(1, 2);          // add: 1
    add(1.3, 2.7);      // add: 1
    add(1, 2.5);        // add: 3
    
    return 0;
}