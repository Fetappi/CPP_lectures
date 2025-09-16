#include <iostream>

template <typename T>
class Point {
         T x{}, y{};
public:
         Point(T a, T b) : x(a), y(b)
                   { }
 
         T get_x() { return x; }
         T get_y() { return y; }
};

class ColorRGB {
    unsigned char r{}, g{}, b{};
};

class ColorUVB {
    unsigned char u{}, v{}, b{};
};

template <typename PT, typename CL>
class Rectangle {
         Point<PT> sp, ep; // координаты прямоугольника
         CL color; // цвет прямоугольника
public:
         Rectangle(Point<PT> pt1, Point<PT> pt2) : sp{pt1}, ep{pt2}
                   { puts("Rectangle"); }
 
         void set_color(CL cl) { color = cl; }
};

template <typename PT> // частичная специализация
class Rectangle<PT, ColorUVB> {
         Point<PT> sp, ep; // координаты прямоугольника
         ColorUVB color; // цвет прямоугольника
public:
         Rectangle(Point<PT> pt1, Point<PT> pt2) : sp{pt1}, ep{pt2}
                   { puts("Rectangle<PT, ColorUVB>"); }
 
         void set_color(ColorUVB cl) { color = cl; }
};

template <> // полная специализация
class Rectangle<double, ColorUVB> {
         Point<double> sp, ep; // координаты прямоугольника
         ColorUVB color; // цвет прямоугольника
public:
         Rectangle(Point<double> pt1, Point<double> pt2) : sp{pt1}, ep{pt2}
                   { puts("Rectangle<double, ColorUVB>"); }
 
         void set_color(ColorUVB cl) { color = cl; }
};

int main()
{

    Point<int> start(0, 0), end(10, 20);
    Point<double> sd(0, 0), ed(10, 20);

    Point<int> start(0, 0), end(10, 20);

    Rectangle<int, ColorRGB> rect1(start, end);

    Rectangle<int, ColorUVB> rect2(start, end);

    Rectangle<double, ColorUVB> rect3(sd, ed);

    return 0;
}