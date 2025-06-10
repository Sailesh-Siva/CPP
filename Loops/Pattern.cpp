#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1,n;
    cout<<"Enter number of columns"<<endl;
    cin>>n;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<i+1;j++)
        {
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
    return 0;
}