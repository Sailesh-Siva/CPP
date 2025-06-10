#include<iostream>
using namespace std;
class data
{
	int bytes,kb,mb,gb;
	public:
	data()
	{
		bytes=0;
		kb=0;
		mb=0;
		gb=0;
	}
	data(int fbytes,int fkb,int fmb,int fgb)
	{
		bytes=fbytes;
		kb=fkb;
		mb=fmb;
		gb=fgb;
	}
	data operator +(data a)
	{
		data r;
		r.bytes=bytes+a.bytes;
		r.kb=kb+a.kb;
		r.mb=mb+a.mb;
		r.gb=gb+a.gb;

		if(r.bytes>1024)
		{
			r.bytes-=1024;
			r.kb+=1;		
		}
		if(r.kb>1024)
		{
			r.kb-=1024;
			r.mb+=1;		
		}
		if(r.mb>1024)
		{
			r.mb-=1024;
			r.gb+=1;		
		}
		return r;
	}
	
	void operator >=(data a)
	{
		int flag=1;
		
		if(gb>=a.gb)
		{	
			if(mb>=a.mb)
			{
				if(kb>=a.kb)
				{
					if(bytes>=a.bytes)
					{
					}
					else
					{
						flag=0;
					}
				}
				else
				{
					flag=0;
				}				
			}
			else
			{
				flag=0;
			}
		}
		else
		{
			flag=0;
		}
		cout<<flag;
	}
	void display()
	{
		cout<<bytes<<endl<<kb<<endl<<mb<<endl<<gb<<endl;
	}
};
int main()
{
	data a(800,800,800,800),b(824,824,824,824),c;
	c=a+b;
	c.display();
	a>=b;
}

	
