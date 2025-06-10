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
        int operator -(time1 t3)
        {
            int a=0,b=0,c=0;
            b=s+60*m+3600*h;
            a=t3.s+60*t3.m+3600*t3.h;
            c=b-a;
            return c;
        }
        void operator ++(int)
        {
            s=s+1;
            if(s==60)
            {
                s=0;
                m+=1;
            }
            if(m==60)
            {
                m=0;
                h+=1;
            }
            if(h==24)
            {
                h=0;
            }
        }
        void display()
        {
            cout<<h<<":"<<m<<":"<<s<<endl;
        }
};

int main()
{
    int diff;
    time1 t1,t2,t3;
    t1.get();
    t2.get();
    diff=t1-t2;
    cout<<diff<<endl;
    t1++;
    t1.display();
    return 0;
}
