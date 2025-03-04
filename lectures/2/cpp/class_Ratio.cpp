#include <iostream>
using namespace std;

class Ratio 
{
    int a,b; // инициализация полей класса;
    public:
        explicit Ratio(int na=0, int nb=1): a(na), b(nb) // explicit - чтобы не было неявного преобразования, 
                                                        // предпочтительная инициализация, порядок важен
                                                        // в приоритете
            { 
                //cout << "Hi: (" << a << "/" << b << ")" << endl << flush; 
            }

        Ratio(const Ratio& src) : a(src.a), b(src.b)
        { 
            cout << "Hi: (" << a << "/" << b << ")" << endl << flush; 
        }

        ~Ratio() { 
            cout << "RIP: (" << a << "/" << b << ")" << endl; 
        }

        Ratio& operator=( const Ratio& src ) 
        { 
            a=src.a; 
            b=src.b; 
            return *this;
        }

        Ratio& operator+=( const Ratio& src )
        { 
            a = a * src.b + b * src.a;
            b *= src.b;
            return *this;
        }
        
        int chislitel() const { return a; }
        int znamenatel() const { return b; }

        Ratio& reverse() { 
            int tmp=a; 
            a=b; 
            b=tmp; 
            return *this; 
        }

        operator int() const { return a/b; }

        Ratio operator+( const Ratio& src2 ) const
        { 
            Ratio res(*this);
            res += src2;
            return res;
        }

};

ostream& operator<<(ostream& os, const Ratio& src)
    { 
        os << "(" << src.chislitel() << "/";
        os << src.znamenatel() << ")" << flush;
        return os;
    }

istream& operator>>(istream& is, Ratio& r)
{
    int na, nb=1; 
    is >> na;

    char c; 
    is >> c;

    if (c=='/') is >> nb;
    r = Ratio(na,nb);
    return is;
}

int main( )
{
    // Ratio r = 1;  //explicit
    // cout << r<< endl;
    Ratio new_R = (Ratio) 5;
    cout << new_R << endl;
    // r += 3;
    // double d = 5;
    // double d = double (5);

    // // overload =
    // Ratio r1(5, 2), r2, r3(3, 4);
    // cout << r1 << endl << r2 << endl << r3 << endl << endl;
    // r3 = r2 = r1;
    // cout << r1 << endl << r2 << endl << r3 << endl << endl;

    // Ratio r1(1,2), r2(1,3), r3;
    // r1 += 3;
    // cout << r1 << endl;


    // Ratio r1, r2, r3;
    // char op;

    // cout<<"enter r1:";
    // cin>>r1;
    // cout << endl;

    // cout<<"enter op:";
    // cin>>op;
    // cout << endl;

    // cout<<"enter r2:";
    // cin>>r2;
    // cout << endl;

    // switch (op)
    // {
    //     case '+': { r3 = r1 + r2; break;}
    //     // case '-': { r3 = r1-r2; break;} /* этот и последующие арифметические */
    //     // case '*': { r3 = r1*r2; break;} /* операторы нужно реализовать */
    //     // case '/': { r3 = r1/r2; break;} /* в классе Ratio по образцу operator+ */
    //     default:
    //         cout << "Error!" << flush;
    //         // return ;
    // }
    // cout<<r1<<' '<<op<<' '<<r2<<" = "<<r3<<endl;

    return 0;
}
