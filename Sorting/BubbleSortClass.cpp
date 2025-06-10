#include<iostream>
using namespace std;

class BubbleSort
{
    public:
    int arr[100],n;
    void bubbleSort()
    {
        int passno=1;
        int last=n-1;
        bool sorted=false;
        for(int current=0;current<last && sorted==false;current++)
        {
            sorted=true;
            for(int walker=last;walker>current;walker--)
            {
                if(arr[walker]<arr[walker-1])
                {
                    int temp;
                    temp=arr[walker];
                    arr[walker]=arr[walker-1];
                    arr[walker-1]=temp;
                    sorted=false;
                }
            }
            cout<<"Number of Passes "<<passno<<endl;
            passno+=1;   
        }
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }    
    }
    void arrInp()
    { 
        cout<<"Enter no of elements\n";
        cin>>n;
        cout<<"Enter array elements\n";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        } 
    }
};
int main()
{
    BubbleSort a; 
    a.arrInp();
    a.bubbleSort();
    a.display();  
}
