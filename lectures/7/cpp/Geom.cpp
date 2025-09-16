#include<iostream>
#include<string>
#include<string.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class GeomBase {
    protected:
        int x0{0}, y0{0}, x1{0}, y1{0};
    public:
        void set_coords(int x0, int y0, int x1, int y1)
        {
            this->x0 = x0; this->y0 = y0;
            this->x1 = x1; this->y1 = y1;
        }
     
        virtual void draw() const = 0;   
};

class Line : public GeomBase {
    private:
        double length{0.0};
    public:
        virtual void draw() const override
        {
            printf("Line: %d, %d, %d, %d\n", x0, y0, x1, y1);
        }
};

class Rect : public GeomBase {
    public:
        virtual void draw() const override
            { printf("Rect: %d, %d, %d, %d\n", x0, y0, x1, y1); }
};
     
class Ellipse : public GeomBase {
public:
    virtual void draw() const override
        { printf("Ellipse: %d, %d, %d, %d\n", x0, y0, x1, y1); }
};


enum {max_geoms = 1000};
 
int main()
{
    size_t count_g = 4; // число геометрических фигур
    GeomBase* geoms[max_geoms] = {nullptr};
 
    geoms[0] = new Line;
    geoms[1] = new Rect;
    geoms[2] = new Line;
    geoms[3] = new Ellipse;
 
    for(size_t i = 0;i < count_g; ++i)
        geoms[i]->draw();
 
    for(size_t i = 0;i < count_g; ++i)
        delete geoms[i];
        
    return 0;
}