#include<iostream>
using namespace std;
int main()
{
float bs,hra,da,gs,pf,nt,empid;
cin>>empid>>bs;
hra = bs*0.75;
da = bs*0.10;
pf = bs*0.125;
gs=bs+hra+da;
nt=gs-pf;
cout<<"Employee Id "<< empid<< "\nNetpay "<<nt ;
return 0;
}
