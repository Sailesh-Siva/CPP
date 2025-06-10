#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class OldPound
{
	/*20 shilings = 1pound
		1 shiling = 12 pence
		1pond=100pence */

	float pounds,shillings,pence,newpound;
	public:
	OldPound()
	{
		pence=0;
		shillings=0;
		pounds=0;
		newpound=0;
	}
	OldPound(float fpounds, float fshillings, float fpence)
	{
		pence=fpence;
		shillings=fshillings;
		pounds=fpounds;
		newpound=0;
	}
	operator float()
	{
		newpound=pounds+shillings/20+pence/240;
		return newpound;
	}
};
int main()
{
	OldPound p(7,17,9);
	float np;
	np=p;
	cout<<setprecision(3)<<np;
}

	
