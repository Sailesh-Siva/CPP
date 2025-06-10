#include<iostream>
using namespace std;

void bubbleSort(int list[],int last)
{
    int passno=0;
    bool sorted=false;
    for(int current=0;current<last && sorted==false;current++)
    {
        sorted=true;
        for(int walker=last;walker>current;walker--)
        {
            if(list[walker]<list[walker-1])
            {
                int temp;
                temp=list[walker];
                list[walker]=list[walker-1];
                list[walker-1]=temp;
                sorted=false;
            }
        }
        passno+=1;
    }
    cout<<"Number of Passes "<<passno<<endl;
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
    bubbleSort(list,last);
    display(list,n);  
}
