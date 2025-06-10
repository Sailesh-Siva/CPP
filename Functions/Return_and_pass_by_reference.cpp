#include<iostream>
using namespace std;
int& sum (int &a,int &b)
{
    int *c;
    *c=a+b;
    return *c;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<sum(x,y);
}
//a(address of variable stored),*a(value stored in address of variable stored),&a(address of a)
/*
int main()
{
    int *a,*b;
    int x,y;
    x=10;
    a=&x;
    b=a;
    cout<<a<<endl<<&a<<endl<<*a<<endl<<b<<endl<<&x;
}
*/