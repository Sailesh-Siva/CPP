#include<iostream>
#include<cstring>
using namespace std;
class stu
{
    char name[10];
    int rollno;
    int m1,m2,m3,m4,m5;
    float total;
    public:

    void getdata(int a, char b[], int c, int d, int e, int f, int g)
    {
        rollno=a;
        strcpy(name,b);
        m1=c;
        m2=d;
        m3=e;
        m4=f;
        m5=g;
        total = m1+m2+m3+m4+m5;
    }
    void display()
    {
        cout<<"Rollno "<<rollno<<endl
            <<"Name "<<name<<endl
            <<"M1 "<<m1<<endl
            <<"M2 "<<m2<<endl
            <<"M3 "<<m3<<endl
            <<"M4 "<<m4<<endl
            <<"M5 "<<m5<<endl
            <<"Total "<<total<<endl;
    }  
};

int main()
{
    stu s[6];
    char name[10];
    int rollno,a=10;
    int m1,m2,m3,m4,m5;
    cout<<"Rollno "<<endl
        <<"Name "<<endl
        <<"M1 "<<endl
        <<"M2 "<<endl
        <<"M3 "<<endl
        <<"M4 "<<endl
        <<"M5 "<<endl
        <<"Total "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<"Enter student no "<<i+1<<endl;
        cin>>rollno>>name>>m1>>m2>>m3>>m4>>m5;
        s[i].getdata(rollno,name,m1,m2,m3,m4,m5);
    }
    for(int i=0;i<6;i++)
    {
        s[i].display(); 
    }   
}
