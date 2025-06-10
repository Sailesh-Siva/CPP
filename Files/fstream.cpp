#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    
    string s;
    fstream f1;
    f1.open("f1.dat",ios::in | ios :: out);
    cout<<f1.tellg()<<endl;
    f1<<"Sail"<<endl;
    cout<<f1.tellg()<<endl;
    f1.seekp(2,ios :: beg);
    f1.seekp(-2,ios :: end);
    f1.seekp(0,ios :: cur);
    cout<<f1.tellg()<<endl;
    f1<<"Word2"<<endl;
    cout<<f1.tellg()<<endl;
    f1.close();
}