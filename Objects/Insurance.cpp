#include<iostream>
#include<string>
using namespace std;
class insurance
{
    string n1,n2;
    int dob,T,age;
    float SA,PA;
    public:
        insurance(string a,int b,string c,float d,int e)
        {
            n1=a;
            dob=b;
            n2=c;
            SA=d;
            T=e;
            if(dob<=23)
            {
            age=23-dob;
            }
            else
            {
                age=123-dob;
            }
        }
        void PA_cal()
        {
            PA=SA/((T*12)*(70-age));
        }
        void display()
        {
            cout<<"Name of Insured "<<n1<<endl
            <<"DoB "<<dob<<endl
            <<"Age "<<age<<endl
            <<"Name of Nominee "<<n2<<endl
            <<"Sum Assured "<<SA<<endl
            <<"Term in years "<<T<<endl
            <<"Premium Account "<<PA<<endl;
        }
};
int main()
{
    string n1,n2;
    int dob,T;
    float SA;
    cout<<"Name of Insured, date of birth, Name of Nominee, Sum Assured, Term in years"<<endl;
    cin>>n1>>dob>>n2>>SA>>T;
    insurance i(n1,dob,n2,SA,T);
    i.PA_cal();
    i.display();
    return 0;
}
