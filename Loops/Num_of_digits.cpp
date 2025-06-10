#include<iostream>
using namespace std;
int main()
{
    int digit,n,sum=0;

    cin>>n;

    while(n>0)
    {
        digit=n%10;
        sum=sum+1;
        n=n/10;
    }
    cout<<sum;    
    return 0;
}