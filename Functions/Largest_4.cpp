#include<iostream>
using namespace std;
int greatest(int &a, int &b, int &c, int &d)
{
 if(a>b && a>c && a>d)
    {
        return a;    
    }
    else if(b>c && b>d)
    {
        return b;
    }
    else if(c>d)
    {
        return c;
    }
    else
    {
        return d;
    }
    
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<greatest(a,b,c,d)<<" is the largest number";
    return 0;
}