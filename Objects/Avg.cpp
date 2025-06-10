#include<iostream>
using namespace std;
class stu
{
    char name[10];
    int m1,m2;
    float subavg;
    public:
    stu()
    {
        subavg=0;
    }
    void input()
    {
        cin>>name>>m1>>m2;
    }
    void subavgf()
    {
        subavg=(m1+m2)/2.0;
    }
    int rm1()
    {
        return m1;
    }
    int rm2()
    {
        return m2;
    }
    int rsubavg()
    {
        return subavg;
    }
    int display()
    {
        cout<<"Name "<<name<<endl
            <<"M1 "<<m1<<endl
            <<"M2 "<<m2<<endl
            <<"Subavg "<<subavg<<endl;
    }
    ~stu()
    {
        cout<<"Object destroyed"<<endl;
    }
    
};

int main()
{
    stu s[5];
    int sum_m1=0,sum_m2=0;
    float sum_subavg=0;
    for(int i=0;i<2;i++)
    {
        cout<<"Enter student no "<<i+1<<endl;
        s[i].input();
    }
    for(int i=0;i<2;i++)
    {   
        s[i].subavgf();
        sum_m1+=s[i].rm1();
        sum_m2+=s[i].rm2();
        sum_subavg+=s[i].rsubavg();   
    }
    cout<<"Avg m1 = "<<sum_m1/2.0<<endl
        <<"Avg m2 = "<<sum_m2/2.0<<endl
        <<"Avg subavg = "<<sum_subavg/2.0<<endl;
    for(int i=0;i<2;i++)
    {
        s[i].display(); 
    }   
}
