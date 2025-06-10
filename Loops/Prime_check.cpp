#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,check=0;
    cin>>n;
    for (i=2;i<=pow(n,0.5);i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime";
            check=1;
            break;
        }
    }
    if(n==1)
    {
        cout<<"Neither Prime Nor Composite";
    }
    else if(check==0)
    {
        cout<<"Prime";
    }
return 0;
}
