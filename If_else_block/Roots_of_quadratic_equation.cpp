#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,D,r1,r2;
int d;
cin>>a>>b>>c;
D=pow(b,2)-4*a*c;
if(D>0)
{
	r1=(-b+sqrt(D))/2*a;
	r2=(-b-sqrt(D))/2*a;	
	cout<<"The roots are"<<r1<<"and"<<r2;
}
else if(D==0)
{
	r1=-b/2*a;
	cout<<"The roots are"<<r1<<"and"<<r1;
}
else
{
	r1=-b/2*a;
	D=sqrt(-D)/2*a;
	cout<<"The roots are "<<r1<<"+ i"<<D<<" and "<<r1<<"- i"<<D;
}
return 0;
}
