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
bool binarySearch(int list[],int last,int target,int &locn)
{
    int begin=0,mid,end;
    bool found;
    end=last;

    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(target>list[mid])
        {
            begin=mid+1;
        }
        else if(target<list[mid])
        {
           end=mid-1;
        }
        else
        {
            begin = end+1;
        }
    }
    locn=mid;
    if(target==list[mid])
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
    cout<<"Target found y/n "<<binarySearch(list,last,target,locn)<<endl;
    cout<<"Index of target element "<<locn<<endl;
    display(list,n); 
    return 0;
}