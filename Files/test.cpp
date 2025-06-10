#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream f2;
    f2.open("my.txt",ios::in | ios::out);
    f2<<"This is the sample code. SASTRA Deemed university";
    cout<<"\nTellg :"<<f2.tellg();
   
    f2.seekg(8,ios::beg);
   
    cout<<"\nTellg :"<<f2.tellg();
   
    char c=f2.get();
   
    cout<<"\nchar :"<<c;
   
    cout<<"\nTellg :"<<f2.tellg();
   
    f2.seekg(10,ios::cur);
   
    cout<<"\nTellg :"<<f2.tellg();
   
    c=f2.get();
   
    cout<<"\nchar :"<<c;
   
    cout<<"\nTellg :"<<f2.tellg();
   
    f2.seekp(7,ios::beg);
   
    f2.put('Q');
   
    f2.seekg(-7,ios::end);
   
    cout<<"\nTellg :"<<f2.tellg();
   
    c=f2.get();
   
    cout<<"\nchar :"<<c;
   
   
    f2.close();

    return 0;
}