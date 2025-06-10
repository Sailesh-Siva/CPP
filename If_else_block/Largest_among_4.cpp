#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d)
    {
        cout<<a<<" is greatest";    
    }
    else if(b>c && b>d)
    {
        cout<<b<<" is greatest";
    }
    else if(c>d)
    {
        cout<<c<<" is greatest";
    }
    else
    {
        cout<<d<<" is greatest"; 
    }
    
    
    return 0;
}