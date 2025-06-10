#include<iostream>
#include<string>
using namespace std;
class student
{
    int dd,mm,yy;
    public:
        student()
        {
            dd=0;
            mm=0;
            yy=0;
        }
        void student_details()
        {
            int input;
            cin>>input;
            dd=input;
            cin>>input;
            mm=input;
            cin>>input;
            yy=input;
        }
        bool operator >(student s)
        {
            bool a=0;
            if(yy>s.yy)
            {
                a=1;
            }
            else if(yy==s.yy)
            {
                if(mm>s.mm)
                {
                    a=1;
                }
                else if(mm==s.mm)
                {
                    if(dd>s.dd)
                    {
                        a=1;
                    }
                }
            }
            return a;
        }
        void display()
        {
            cout<<dd<<mm<<yy;
        }
};

int main()
{
    student s[3],s1;
    int i;
    for(i=0;i<3;i++)
    {
        s[i].student_details();
    }
    if(s[0]>s[1] && s[0]>s[2])
    {
        s[0].display();
    }
    else if(s[1]>s[2])
    {
        s[1].display();
    }
    else
    {
        s[2].display();
    }
}
