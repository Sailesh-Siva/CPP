#include<iostream>
using namespace std;

class test1
{
    class test2;
    public :
    int c,d;
    test1()
    {
        c=10;
        d=10;
    }
    friend int f1(test1 x,test2 y);
};

class test2
{
    public:
    int e,f;
    test2()
    {
        e=10;
        f=10;
    }
    friend int f1(test1,test2);
};

int f1(test1 x,test2 y)
{
    return x.c+x.d+y.e+y.f;
}

int main()
{
    test1 x;
    test2 y;
    cout<<f1(x,y);
}