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
bool RecursiveLinearSearch(int list[],int index,int last,int target,int &locn)
{
    if(index>last)
    {
        locn=-1;
        return false;
    }
    if(target==list[index])
    {
        locn=index;
        return true;
    }
    return RecursiveLinearSearch(list,index+1,last,target,locn);
}
int main()
{
    int list[100],last,n,target,locn,index=0;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    last=n-1;
    cout<<"Enter the elements of the array"<<endl;
    listInp(list,n);
    cout<<"Enter the search element"<<endl;
    cin>>target;
    cout<<"Target found y/n "<<RecursiveLinearSearch(list,index,last,target,locn)<<endl;
    cout<<"Index of target element "<<locn<<endl;
    display(list,n); 
    return 0;
}