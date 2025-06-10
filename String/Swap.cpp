#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1="Welcome";
    string s2("SASTRA");
    string s3,s4,s5;
   
    s3=s1; // assign or copy from one string to other string
    s4=s1+s2;  // concatenate two string
   
    s5=s1+" to "+s2;

    cout<<s1<<"\n"<<s2<<"\n"<<s3<<"\n"<<s4<<"\n"<<s5;
   
    s1.swap(s2);
   
    cout<<"\nAfter swap \n"<<s1<<"\n"<<s2;
   

    return 0;
}