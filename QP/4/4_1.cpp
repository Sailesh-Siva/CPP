#include<iostream>
#include<string>
using namespace std;
class Employee
{
    public:
    string name,gender;
    int age,salary;
    Employee()
    {
        name="";
        gender="";
        age=0;
        salary=0;
    }
    int operator <(Employee x)
    {
        return age < x.age;
    }
    int operator >(Employee x)
    {
        return salary > x.salary;
    }
    void input()
    {
        cin>>name>>gender>>age>>salary;
    }
    void output()
    {
        cout<<endl<<name<<endl<<gender<<endl<<age<<endl<<salary<<endl<<"Done"<<endl;
    }

};
int main()
{
    Employee e[5],emin,emax;   
    for(int i=0;i<5;i++)
    {
        e[i].input();
    }
    emin=e[0];
    emax=e[0];
    for(int i=0;i<5;i++)
    {
        if(e[i]<emin)
        {
            emin=e[i];
        }
        
    }
    emin.output();

    for(int i=0;i<5;i++)
    {
        if(e[i]>emax)
        {
            emax=e[i];
        }
    }
    emax.output();

    for(int j=0;j<5;j++)
    {
        e[j].output();
    }
}