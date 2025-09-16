#include <iostream>

// template <typename T>
// class Point {
//          T x{}, y{};
// public:
//         Point(T a, T b) : x(a), y(b)
//                    { }

//         void set_xy(T a, T b)
//         {
//                     x = a;
//                     y = b;
//         }

//         void get_xy() const;
// };

// template <typename T>
// void Point<T>::get_xy() const
// {
//     std::cout << "x = " << x << ", y = " << y << std::endl;
// }


template <typename T1, typename T2>
class Point {
public:
         T1 x{};
         T2 y{};
public:
         Point(T1 a, T2 b) : x(a), y(b)
                   { }
};

int main()
{
        //  Point<int> pt_i(1, 2);
        //  Point<double> pt_d(1, 2);
 
         Point pt_i2(10, 20);       // начиная с C++17
         Point pt_d2(1, 2.5);    // начиная с C++17

        //  pt_d2.get_xy();
 
         return 0;
}