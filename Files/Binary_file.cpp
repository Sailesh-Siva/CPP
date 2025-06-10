#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class stu
{
    int rno;
    string name;
    public:
    void input()
    {
        cin>>rno>>name;
    }
    void display()
    {
        cout<<rno<<"    "<<name<<endl;
    }
    int ret_no()
    {
        return rno;
    }
};
void insert()
{
    stu s;
    s.input();
    fstream f;
    f.open("text.txt",ios :: app| ios :: binary);
    f.write((char*)&s,sizeof(s));
    f.close();
}
void print()
{
    stu s1;
    fstream fin("text.txt",ios :: in| ios :: binary);
    while(fin.read((char*)&s1,sizeof(s1)))
    {
        s1.display();
    }
}
int main()
{
    for(int i=0;i<3;i++)
    {
        insert();
    }
    print();
}