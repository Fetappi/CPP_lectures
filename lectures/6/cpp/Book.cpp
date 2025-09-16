#include<iostream>
#include<string>
#include<string.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;


class book
{
    protected:
        string title{""};
        string author{""};
        int year{0};
        bool available{true};

    public:

        book(const char *au, const char * ti, int y)
        {
            author = au;
            title = ti;
            year = y;

            // cout << "Book created" << endl;
        }

        book(const string& au, const string& ti, int y)
        {
            author = au;
            title = ti;
            year = y;

            // cout << "Book created" << endl;
        }

        book(): year(0)
        {
            author = "A";
            title = "T";
            // cout << "Empty book created" << endl;
        }

        void taken_by_reader()
        {
            available = false;
        }

        void return_book()
        {
            available = true;
        }

        void change_year(int y)
        {
            year = y;
        }

        void display_book()
        {
            cout << "----------------" << endl;
            cout << "Book info: " << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Year: " << year << endl;
            cout << "Is the book available:" << available << endl;
            cout << "----------------" << endl;
        }

        ~book()
        {
            // cout << "Book destroyed" << endl;
        }

};

class reader
{
    protected:
        string name{""};
        string surname{""};
        int year{0};
        bool taken_book{false};

    public:
        reader(const char *n, const char *s, int y)
        {
            name = n;
            surname = s;
            year = y;

            // cout << "Reader created" << endl;
        }

        reader(const string& n, const string& s, int y)
        {
            name = n;
            surname = s;
            year = y;

            // cout << "Reader created" << endl;
        }

        reader(): year(0)
        {
            name = "N";
            surname = "S";
            // cout << "Empty reader created" << endl;
        }

        void display_reader()
        {
            cout << "----------------" << endl;
            cout << "Reader info: " << endl;
            cout << "Name: " << name << endl;
            cout << "Surname: " << surname << endl;
            cout << "Year: " << year << endl;
            cout << "Is the book taken:" << taken_book << endl;
            cout << "----------------" << endl;
        }

        void take_book()
        {
            cout << name << " has taken the book" << endl;
            taken_book = true;
        }

        void return_book()
        {
            taken_book = false;
        }

        ~reader()
        {
            // cout << "Reader destroyed" << endl;
        }
};

class library_card: public book, public reader
{
    private:
        int card_number;
        int year;

    public:
        library_card(const char *au, const char * ti, int y_book, 
            const char *n_reader, const char *s, int y2, int cn, int y_card): 
            book(au, ti, y_book), reader(n_reader, s, y2)
        {
            card_number = cn;
            year = y_card;

            // cout << "Library card created" << endl;
        }

        library_card(const string& au, const string& ti, int y_book, 
            const string& n_reader, const string& s, 
            int y2, int cn, int y_card): 
            book(au, ti, y_book), reader(n_reader, s, y2)
        {
            card_number = cn;
            year = y_card;

            // cout << "Library card created" << endl;
        }
        
        // //конструктор по умолчанию 1
        // library_card()//: book(), reader()
        // {
        //     card_number = 0;
        //     year = 0;
        //     // cout << "Empty library card created" << endl;
        // }

        //конструктор по умолчанию 2
        library_card(): 
        book("A", "T", 0), 
        reader("N", "S", 0), card_number(0), year(0)
        {
            // cout << "Empty library card created" << endl;
        }

        void display()
        {
            book::display_book();
            reader::display_reader();
            cout << "----------------" << endl;
            cout << "Library card info: " << endl;
            cout << "Card number: " << card_number << endl;
            cout << "Year: " << year << endl;
            cout << "----------------" << endl;
        }

        void take_book()
        {
            book::taken_by_reader();
            reader::take_book();

            cout << "----------------" << endl;
            cout << "library card msg: " << endl;
            cout << "The user took the book" << endl;
            cout << "----------------" << endl;
        }

        void return_book()
        {
            book::return_book();
            reader::return_book();
        }

        ~library_card()
        {
            // cout << "Library card destroyed" << endl;
        }

        void get_year()
        {
            cout << year << endl;
            cout << book::year << endl;
            cout << reader::year << endl;
        }

};

int main()
{
    library_card John("William Shakespeare", "Hamlet", 1600, "John", "Doe", 1990, 123, 2019);
    library_card Tom("Arthur Conan Doyle", "Sherlock Holmes", 1892, "Tom", "Smith", 1995, 124, 2019);
    library_card Alice("J.K. Rowling", "Harry Potter", 1997, "Alice", "Brown", 2000, 125, 2019);
    library_card Bob("George Orwell", "1984", 1949, "Bob", "White", 2005, 126, 2019);
    library_card test_card("Test", "Test", 0, "Test", "Test", 0, 0, 0);

    library_card cards[4] = {John, Tom, Alice, Bob};

    // John.get_year();

    ////............................................

    for (library_card c: cards)
    {
        // c.display();
        c.display_book();
        // c.display_reader();
    }

    ////............................................

    /////////////////////////////////////////////
    // из дочернего класса в базовый

    // library_card *ptr_card = new library_card("Test", "Test", 0, "Test", "Test", 0, 0, 0); // без конструктора по умолчанию
    library_card *ptr_card = &John; // с конструктором по умолчанию

    // ptr_card = &John; //присваиваем адрес объекта John

    ////............................................

    // ptr_card -> take_book();
    // ptr_card -> reader::take_book();

    ////............................................

    book *ptr_book = new book; //создаем указатель на базовый класс
    ptr_book = ptr_card; //присваиваем адрес объекта John

    ////............................................

    ptr_book->display_book();
    // ptr_book->display();//error

    ////............................................

    ////............................................

    ptr_card->display_book();
    ptr_card->change_year(2000);
    ptr_card->display_book();

    ////............................................


    // delete ptr_card;
    // delete ptr_book;


    return 0;
}