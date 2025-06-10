#include<iostream>
#include<cstring>
using namespace std;
class passenger
{
    char name[10],gender,berth,rs[10];
    int dob;
    public:
    passenger()
    {
        strcpy(rs,"unreserved");
    }
    void getdata(char a[], int b, char c, char d)
    {
        strcpy(name,a);
        dob=b;
        gender=c;
        berth=d;
        strcpy(rs,"reserved");
        cout<<endl;
    }
    void display()
    {
        cout<<"Name "<<name<<endl
            <<"Dob "<<dob<<endl
            <<"Gender "<<gender<<endl
            <<"Birth preference "<<berth<<endl
            <<"Reservation Status "<<rs<<endl<<endl;
    }  
};

int main()
{
    passenger p[6];
    char name[10],gender,berth,rs[10];
    int dob;
    cout<<"Name "<<endl
        <<"Dob "<<endl
        <<"Gender"<<endl
        <<"Berth Preference "<<endl<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"Enter passenger no "<<i+1<<endl;
        cin>>name>>dob>>gender>>berth;
        p[i].getdata(name,dob,gender,berth);
    }
    for(int i=0;i<2;i++)
    {
        p[i].display(); 
    }   
}
