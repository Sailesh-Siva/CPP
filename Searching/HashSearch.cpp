#include<iostream>
#define size 5
using namespace std;
struct node
{
    int data;
    node *link;
};
struct slmetadata
{
    int count;
    node *first;
};
class Hashtable
{
	slmetadata *sl[size];
	public:
	Hashtable()
	{
        for(int i=0;i<size;i++)
		    sl[i]=NULL;  
	}
    void createHashtable()
    {
        for(int i=0;i<size;i++)
		{
            sl[i]=new slmetadata();
            sl[i]->count=0;
            sl[i]->first=NULL;
        }
    }
	void insertfromhash(int d)
	{
        int  rem = d%size;
		node *t = new node;
        t->data= d;
        t->link = sl[rem]->first;
        sl[rem]->first=t;
        sl[rem]->count++;
	}
    void deletefromhash(int d)
	{
        int  rem = d%size;
        node *temp2 = NULL;
        node *temp1 = sl[rem]->first;
        if (temp1 != NULL && temp1->data == d)
        {
            sl[rem]->first = temp1->link;
            delete temp1;
            cout << "Data deleted"<<endl;
            sl[rem]->count--;
        }
        else
        {
            while(temp1!=NULL && temp1->data!=d)
            {
                temp2=temp1;
                temp1=temp1->link;
            }
            if(temp1==NULL)
                cout<<"Data not found"<<endl;
            else
            {
                temp2->link=temp1->link;
                delete temp1;
                cout<<"Data deleted"<<endl;
                sl[rem]->count--;
            }
        }
	}
    void searchfromhash(int d)
	{
        int  rem = d%size,i=0;
        node *temp=sl[rem]->first;
        while(temp!=NULL && temp->data!=d)
        {
            temp=temp->link;
            i++;
        }
        if(temp==NULL)
            cout<<"Data not found"<<endl;
        else
        {
            cout<<"Hash Index and Index in SLL of the element "<<rem<<" "<<i<<endl;
        }
        cout<<endl;
	}
	void traversal()
	{
        cout<<"Hash Table"<<endl;
        for(int i=0;i<size;i++)
        {
            node *temp=sl[i]->first;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->link;
            }
            cout<<endl;
        }
	}
};
int main()
{   
	Hashtable s;
	int data,loc,opt;
    s.createHashtable();
	do
	{
		cout<<"Enter"<<endl
			<<"1 Insert"<<endl
			<<"2 Delete"<<endl
			<<"3 Search"<<endl
            <<"4 Traversal"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1:
			    cout<<"Enter element to be inserted"<<endl;
			    cin>>data;
			    s.insertfromhash(data);
			    break;
			case 2:
                cout<<"Enter element to be deleted"<<endl;
			    cin>>data;
                s.deletefromhash(data);
			    break;
			case 3:
                cout<<"Enter element to be searched"<<endl;
			    cin>>data;
                s.searchfromhash(data);
			    break;
            case 4:
			    s.traversal();
			    break;
			default:
			    cout<<"Enter vaild option"<<endl;		
			    break;
		}	
	}while(true);
}