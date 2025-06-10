#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
    char str1[10],str2[10],str3[10][10]={"abc","bcd","efg"},str4[10]="z",str5[10],str6[]="test1 test2";
    cin>>setw(10)>>str1;//setw limits input to specified characters -1 since the last char in null
    cout<<str1<<endl;
    cin>>ws; //discards leading whitespace from string
    cin.get(str1,10); //parameters(variable,length,terminating character for multiple lines default is \n)
    cout<<str1<<endl;
    cout<<strlen(str1)<<endl;
    cout<<strcpy(str2,str1)<<endl;
    cout<<str3[2][1]<<endl; 
    cout<<strcmp(str1,str4)<<endl;
    cout<<strncmp(str1,str4,1)<<endl;
    cout<<strcat(str1,str4)<<endl;
    cout<<str1<<str4<<endl;
    cout<<str6;
}
