//Insertion Sort
#include<iostream>
using namespace std;
//2,4,3,7
void insertionSort(int list[],int last)
{
    for(int current=1;current<last+1;current++)
    {
        int walker,key=list[current];
        for(walker=current-1;walker>-1 && key<list[walker];walker--)
        {
            list[walker+1]=list[walker];
        }
        list[walker+1]=key;
    }
}
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
int main()
{
    int list[100],n,last;
    cout<<"Enter no of elements\n";
    cin>>n;
    last=n-1;
    cout<<"Enter list elements\n";
    listInp(list,n);
    insertionSort(list,last);
    display(list,n);  
}
