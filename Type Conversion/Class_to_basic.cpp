#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test()
    {
        a=50;
    }
    operator int()
    {
        return a;
    }
};
int main()
{
    test t;
    int x;
    cout<<x<<endl;
    x=t;
    cout<<x;
    return 0;
}