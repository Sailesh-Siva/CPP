#include<iostream>
#include<cmath>
using namespace std;
int digits(int n)
{
    int digit,n1,sum=0;
    n1=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+1;
        n=n/10;
    }
    return sum;    
}
float sumofpower(int n,int power)
{
    float digit,sum=0,p1=0;
    while(n>0)
    {
        digit=n%10;
        p1=pow(digit,power);
        sum+=p1;
        n=n/10;
    }
    
    return sum;    
}
int main()
{
    int n,power,x;
    cin>>n;
    power=digits(n);
    x=sumofpower(n,power);
    if(x==n)
    {
        cout<<"It is a Armstrong Number";
    }
    else
    {
        cout<<"It is not a Armstrong Number";
    }
}
