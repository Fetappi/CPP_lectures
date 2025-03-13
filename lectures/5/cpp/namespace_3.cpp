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

// int global_a = 5;

namespace secondSpace {
void foo()
{
    std::cout << "function from secondSpace: foo()" << std::endl;
}
// int global_a = 3 ;

inline namespace params
{
    int global_a = 10;
} 

}

using std::cout;
using std::endl;
int main()
{
    firstSpace::foo();
    std::cout << firstSpace::params::global_a << std::endl;
    std::cout << secondSpace::global_a << std::endl;
    
    // cout << global_a << endl;

    
    return 0;
}