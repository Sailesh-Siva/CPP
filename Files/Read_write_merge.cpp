#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string s;
    ofstream file1,file3,file5;
    file1.open("demo1.dat");
    file3.open("demo2.dat");
    file5.open("demo3.dat");
    cout<<"Enter your name"<<endl;
    getline(cin,s);
    file1<<s<<endl;
    cout<<"Enter your register number"<<endl;
    getline(cin,s);
    file1<<s<<endl;
    file1.close();
    ifstream file2;
    file2.open("demo1.dat");
    cout<<endl;
    cout<<"Contents of demo1.dat"<<endl;
    while(!file2.eof())
    {
        getline(file2,s);
        cout<<s<<endl;
        file3<<s<<endl;
        file5<<s<<endl;
    }
    file3.close();
    ifstream file4;
    file4.open("demo2.dat");
    cout<<"Contents of demo2.dat"<<endl;
    while(!file4.eof())
    {
        getline(file4,s);
        cout<<s<<endl;
        file5<<s<<endl;
    }
    file5.close();
    return 0;
}