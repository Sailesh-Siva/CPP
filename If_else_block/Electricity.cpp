#include <iostream>
using namespace std;

int main()
{
float unit,charge,cust_num;

cin>>cust_num>>unit;
if(unit<101)
{
	charge=unit*40;
}
else if(unit<301)
{
    charge=100*40+(300-unit)*80;
}
else if(unit<401)
{
	charge=100*40+200*80+(400-unit)*90;
}
else
{
    charge=100*40+200*80+100*90+(unit-400)*100;
    charge=charge+(charge*0.15);    
}
cout<<"Customer Number "<<cust_num<<"\nCharge "<<(charge)/100+100;
return 0;
}
