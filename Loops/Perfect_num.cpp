#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,sum=1;
    cin>>n;
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        cout<<"Is a Perfect Number";
    }
    else
    {
        cout<<"Not a Perfect Number";
    }
    return 0;
}
