#include<iostream>
using namespace std;
class test1
{
    public:
    int a,b;
    
    test1()
    {
        a=50;
        b=100;
    }
    void display()
    {
        cout<<a<<b;
    }
};
class test2
{
    public:
    int x;
    float y;
    test2()
    {
        x=15;
        y=13.15;
    }
    void display()
    {
        cout<<x<<y;
    }
    test2 (test1 k)
    {
        x=k.a;
        y=k.b;
    }
};
int main()
{
    test1 t1,t3;
    test2 t2;
    t2.display();
    cout<<endl;
    t3=t1;
    t2=t1;
    t1.display();
    cout<<endl;
    t2.display();
    cout<<endl;
    t3.display();
    return 0;
}