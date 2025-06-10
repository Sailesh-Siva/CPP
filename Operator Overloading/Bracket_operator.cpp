#include<iostream>
using namespace std;
class test
{
    int x[3];
    public:
    test()
    {
        for(int i=0;i<3;i++)
        {
            x[i]=i;
        }
    }
    int operator [](int a)
    {
        return x[a];
    }

};
int main()
{
    test a;
    cout<<a[2];
}