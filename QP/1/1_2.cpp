#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class GeometricShape
{
    public:
	float x,y,h,area;
	GeometricShape()
	{
		x=0;
        y=0;
        area=0;
	}
	void getdata()
	{
        cout<<"Getting x,y,h"<<endl;
		cin>>x;
		cin>>y;
        cin>>h;
	}
    virtual void displayarea()=0;
};
class Rhombus : public GeometricShape
{
    public:
    Rhombus()
    {}
    virtual void displayarea()
    {
        area=(x*y)/2.0;
        cout<<"Area "<<area<<endl;
    }
};
class Rectangle : public GeometricShape
{
    public:
    Rectangle()
    {}
    virtual void displayarea()
    {
        area=x*y;
        cout<<area<<endl;
    }
};

class Trapezoid : public GeometricShape
{
    public:
    Trapezoid()
    {}
    virtual void displayarea()
    {
        area=x*y/2.0*h;
        cout<<area<<endl;
    }
};



int main()
{
    GeometricShape *x,*y,*z;
	Rhombus a;
    Rectangle b;
    Trapezoid c;
    x=&a;
    y=&b;
    z=&c;
    x->getdata();
    x->displayarea();
    y->getdata();
    y->displayarea();
    z->getdata();
    z->displayarea();

    return 0;
}

	
