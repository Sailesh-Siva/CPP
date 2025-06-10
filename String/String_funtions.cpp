#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
    string s1,s2,s3,s4,s5,s6;
    char str[10];
    cin>>setw(10)>>s1;//No null char all 10 inputed
    cin>>s2;
    cout<<s1+s2<<endl;
    getline(cin,s3,'#');
    cout<<s3;
    s1.copy(str,s1.length(),3);
    str[4]=0;
    cout<<str;
}
