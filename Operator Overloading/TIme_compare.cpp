#include<iostream>
#include<string>
using namespace std;
class time1
{
    int h,m,s;
    public:
        void get()
        {
            int input;
            cin>>input;
            h=input;
            cin>>input;
            m=input;
            cin>>input;
            s=input;
        }
        bool operator ==(time1 t2)
        {
            bool a=0;
            if(h==t2.h && m==t2.m && s==t2.s)
            {
                a=1;
            }
            return a;
        }
        void display()
        {
            cout<<h<<":"<<m<<":"<<s<<endl;
        }
};

int main()
{
    bool b;
    time1 t1,t2;
    t1.get();
    t2.get();
    b=t1==t2;
    cout<<b;
    return 0;
}
