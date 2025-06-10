#include<iostream>
using namespace std;
void display(int list[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<list[i]<<" ";
    }    
}
void listInp(int list[],int n)
{ 
    for(int i=0;i<n;i++)
    {
        cin>>list[i];
    } 
}
bool seqSearch(int list[],int last,int target,int &locn)
{
    int looker;
    bool found;
    for (looker=0;(looker<last) && target!=list[looker];looker++);
    locn=looker;
    if(target==list[looker])
    {
        found=true;
    }
    else
    {
        locn=-1;
        found=false;
    }
    return found;
}
int main()
{
    int list[100],last,n,target,locn;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    last=n-1;
    cout<<"Enter the elements of the array"<<endl;
    listInp(list,n);
    cout<<"Enter the search element"<<endl;
    cin>>target;
    cout<<"Target found y/n "<<seqSearch(list,last,target,locn)<<endl;
    cout<<"Index of target element "<<locn<<endl;
    display(list,n); 
    return 0;
}