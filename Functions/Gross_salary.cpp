#include<iostream>
using namespace std;
float fnt(int bs)
{
    float hra,da,gs,pf,nt;

    hra = bs*0.75;
    da = bs*0.10;
    pf = bs*0.125;
    gs=bs+hra+da;
    nt=gs-pf;
    return nt;
}
int main()
{
    float bs,empid,nt;
    cin>>empid>>bs;
    nt=fnt(bs);

    cout<<"Employee Id "<< empid<< "\nNetpay "<<nt ;
return 0;
}
