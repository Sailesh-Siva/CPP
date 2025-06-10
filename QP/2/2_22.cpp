#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

class Library
{
public:
    char book_name[50];
    char author_name[50];
    int no_of_pages, no_of_copies, book_no;

    Library() {}
    Library(string fbook_name, string fauthor_name, int fno_of_pages, int fno_of_copies, int fbook_no)
    {
        strcpy(book_name, fbook_name.c_str());
        strcpy(author_name, fauthor_name.c_str());
        no_of_pages = fno_of_pages;
        no_of_copies = fno_of_copies;
        book_no = fbook_no;
    }

    void display()
    {
        cout << "Book Name: " << book_name << endl;
        cout << "Author Name: " << author_name << endl;
        cout << "No. of Pages: " << no_of_pages << endl;
        cout << "No. of Copies: " << no_of_copies << endl;
        cout << "Book No: " << book_no << endl;
        cout << "============================" << endl;
    }
};

void diskout()
{
    string def_book = "Book";
    string def_author = "Author";
    fstream w;
    w.open("LIB.TXT", ios::binary | ios::app);
    for (int i = 0; i < 10; i++)
    {
        Library x(def_book + to_string(i), def_author + to_string(i), i, i, i);
        w.write(reinterpret_cast<char*>(&x), sizeof(x));
    }
    w.close();
}

void diskin()
{
    fstream r;
    Library y;
    r.open("LIB.TXT", ios::binary | ios::in);
    while (r.read(reinterpret_cast<char*>(&y), sizeof(y)))
    {
        y.display();
    }
    r.close();
}

int main()
{
    diskout();
    diskin();

    return 0;
}