//Recursive Binary Search
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
bool binarySearch(int list[],int first,int last,int target,int &locn)
{
    int mid;
    bool found; 
    if(first>last)
    {   
        locn=-1;
        return false;
    }
    else
    {
        mid=(first+last)/2;
        if(target<list[mid])
        {
            return binarySearch(list,first,mid-1,target,locn);
        }
        else if(target>list[mid])
        {
            return binarySearch(list,mid+1,last,target,locn);
        }
        else
        {
            locn=mid;
            return true;
        }
    }
}
int main()
{
    int list[100],first,last,n,target,locn;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    last=n-1;
    first=0;
    cout<<"Enter the elements of the array"<<endl;
    listInp(list,n);
    cout<<"Enter the search element"<<endl;
    cin>>target;
    cout<<"Target found y/n "<<binarySearch(list,first,last,target,locn)<<endl;
    cout<<"Index of target element "<<locn<<endl;
    display(list,n); 
    return 0;
}