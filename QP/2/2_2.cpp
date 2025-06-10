#include<iostream>
#include<string>
#include<fstream>
#include<typeinfo>
using namespace std;

class Library
{
    public:
    string book_name,author_name;
    int no_of_pages,no_of_copies,book_no;
    Library()
    {}
    Library(string fauthor_name,int fno_of_pages,int fno_of_copies,int fbook_no)
    {
        author_name=fauthor_name;
        no_of_pages=fno_of_pages;
        no_of_copies=fno_of_copies;
        book_no=fbook_no;
    }
    void display()
    {
        cout<<author_name<<endl;
        cout<<no_of_pages<<endl;
        cout<<no_of_copies<<endl;
        cout<<book_no<<endl;
    }
};
void diskout()
{   
    string def="ab";
    fstream w;
    w.open("LIB.TXT",ios ::binary | ios :: app);
    for(int i=0;i<10;i++)
    {
        Library x(def,i,i,i);
        w.write((char*)&x,sizeof(x));
    }
    w.close();
}
void diskin()
{   
    fstream r;
    Library y;
    r.open("LIB.TXT",ios ::binary | ios :: in);
    while(r.read((char*)&y,sizeof(y)))
    {
        y.display();
    }
    r.close();
}
int main()
{
    diskout();
    diskin();
}