#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int digit,n,sum=0,i=0;

    cin>>n;
    while(true)
    {
        for(;n>0;)
        {
            digit=n%10;
            sum+=digit;
            n=n/10;
        }
        if(sum<10)
        {
            break;
        }
        else
        {
            n=sum;
            sum=0;
        }
    }
    cout<<sum;    
    return 0;
}