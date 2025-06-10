#include<iostream>
using namespace std;

void bubblesort(int list[],int n)
{
	int last=n-1;
	int current=0;
	bool sorted = false; 
	while(current<last)
	{
		int walker=last;
		while(walker>current && sorted == false)
		{
			if(list[current]>list[walker])
			{
				swap(list[current],list[walker]);
				sorted = false;
			}
			walker--;
		}
		current++;
	}
}
void display(int list[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<list[i];
	}
}
int main()
{
	int list[5]={3,4,5,2,8};
	int n=sizeof(list)/sizeof(list[0]);
	bubblesort(list,n);
	display(list,n);
}