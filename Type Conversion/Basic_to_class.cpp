#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test()
    {
        a=10;
    }
    test(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    test t;
    int x=5;
    t.display();
    cout<<endl;
    t=x;
    t.display();
    return 0;
}