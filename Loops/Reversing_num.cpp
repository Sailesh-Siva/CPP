#include<iostream>
using namespace std;
int main()
{
    int digit=0,n,num=0;

    cin>>n;

    while(n>0)
    {
        digit=n%10;
        num=num*10+digit;
        n=n/10;
    }
    cout<<num;
    return 0;
}
