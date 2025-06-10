#include<iostream>
using namespace std;
int main()
{
    int digit,n,num=0,m;
    cin>>n;
    m=n;
    while(n>0)
    {
        digit=n%10;
        num=num*10+digit;
        n=n/10;
    }
    if(num==m)
    {
        cout<<m<<" is a palindrome";
    }
    else
    {
        cout<<m<<" is not a palindrome";
    }
    return 0;
}


