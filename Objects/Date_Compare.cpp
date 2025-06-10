#include<iostream>
using namespace std;
class date
{
    int day,month,year;
    public:
        date()
        {
            year=0;
            month=0;
            day=0;
        }
        date(int a,int b,int c)
        {
            year=a;
            month=b;
            day=c;
        }
        void difference(date a,date b)
        {
            year=a.year-b.year;
            month=a.month-b.month;
            day=a.day-b.day;
        }
        void display()
        {
            cout<<year<<"/"<<month<<"/"<<day<<endl;
        }
};
int main()
{
    date d1;
    int year,month,day;
    cout<<"Enter today's date"<<endl;
    cin>>year>>month>>day;
    date d2(year,month,day);
    cout<<"Enter your birthdate"<<endl;
    cin>>year>>month>>day;
    date d3(year,month,day);
    d1.difference(d2,d3);
    d1.display();
    return 0;
}
