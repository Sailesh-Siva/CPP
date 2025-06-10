#include<iostream>
#include<string>
using namespace std;
class IncomeTaxPayee
{	
	public:
	string name;
	char gender;
	int age;
	float gross_pay,deductions,taxable_income,tax_on_taxable_income;
	
	IncomeTaxPayee()
	{
		name="test";
		age=0;
		gross_pay=0;
		deductions=0;
	}
	IncomeTaxPayee(string fname,char fgender,int fage,float fgross_pay,float fdeductions)
	{
		name=fname;
		age=fage;
		gross_pay=fgross_pay;
		deductions=fdeductions;
	}
	virtual float Computetax()=0;
};
class SeniorCitizen : public IncomeTaxPayee
{	
	public:
	SeniorCitizen(string fname,char fgender,int fage,float fgross_pay,float fdeductions) : IncomeTaxPayee(fname,fgender,fage,fgross_pay,fdeductions)
	{}
	virtual float Computetax()
	{
		taxable_income = gross_pay -deductions;
		if(taxable_income<300000)
		{
			tax_on_taxable_income=0;
		}
		else if(taxable_income>=300000 && taxable_income<500000)
		{
			tax_on_taxable_income=0.05*taxable_income;
		}
		else if(taxable_income>=500000 && taxable_income<1000000)
		{
			tax_on_taxable_income=0.2*taxable_income;
		}
		else if(taxable_income>=1000000)	
		{
			tax_on_taxable_income=0.3*taxable_income;
		}
		cout<<tax_on_taxable_income<<endl;
	}
};
class Individuals : public IncomeTaxPayee
{
	public:
	Individuals(string fname,char fgender,int fage,float fgross_pay,float fdeductions) : IncomeTaxPayee(fname,fgender,fage,fgross_pay,fdeductions)
	{}
	virtual float Computetax()
	{
		taxable_income = gross_pay -deductions;
		if(taxable_income<250000)
		{
			tax_on_taxable_income=0;
		}
		else if(taxable_income>=250000 && taxable_income<500000)
		{
			tax_on_taxable_income=0.05*taxable_income;
		}
		else if(taxable_income>=500000 && taxable_income<1000000)
		{
			tax_on_taxable_income=0.2*taxable_income;
		}
		else if(taxable_income>=1000000)	
		{
			tax_on_taxable_income=0.3*taxable_income;
		}
		cout<<tax_on_taxable_income<<endl;
	}
	
};
int main()
{
	string s= "sailesh",t="taniya";
	IncomeTaxPayee *a,*b;
	Individuals c(s,'m',20,100000,0);
	SeniorCitizen d(t,'f',70,1000000,0);
	a=&c;
	b=&d;
	a->Computetax();
	b->Computetax();
}

	
