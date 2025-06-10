#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    float a=1244.32112223;
    cout<<setprecision(3)<<a<<endl;
    cout<<setiosflags(ios::fixed)<<a<<endl;
    cout<<setiosflags(ios::showpoint)<<setprecision(5)<<a<<endl;   
}