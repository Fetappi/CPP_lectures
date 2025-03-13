#include <iostream>

namespace firstSpace {
void foo()
{
    std::cout << "function from firstSpace: foo()" << std::endl;
}
namespace params
{
    int global_a = 5;
} 

}

namespace secondSpace {
void foo()
{
    std::cout << "function from secondSpace: foo()" << std::endl;
}

inline namespace params
{
    int global_a = 10;
} 

}

// using <пространство имен>::<элемент>;   // использование элемента из пространства имен
// using namespace <пространство имен>;    // использование всех элементов из пространства имен

using std::cout;
using std::endl;
using firstSpace::foo;
// using namespace std; ---считается плохой практикой, так как включает в себя все элементы пространства имен std
// при этом использовать using можно не только в глобальной области видимости, но и внутри функций/классов/пространств имен

int main()
{
    foo();
    cout << firstSpace::params::global_a << endl;
    cout << secondSpace::global_a << endl;
    

    
    return 0;
}