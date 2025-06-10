#include<iostream>
#include<string>
using namespace std;
class date
{
    int dd,mm,yy;
    public:
        date()
        {
            dd=1;
            mm=1;
            yy=2022;
        }
        date(int a,int b,int c)
        {
            dd=a;
            mm=b;
            yy=c;
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
        void operator ++()
        {
            if(mm<12)
            {
                mm+=1;
            }
            else
            {
                mm=1;
                yy+=1;
            }
        }
        void display()
        {
            cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
        }
};

int main()
{
    date d1,d2(1,12,2024);
    ++d1;
    ++d2;
    d1.display();
    d2.display();  
    return 0;
}
