#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float avgf(int a,int b)
{
    return a+b/2;    
}
float avgf(int a,float d)
{
    return a+d/2;   
}
float avgf(float c,int b)
{
    return c+b/2;   
}
float avgf(float c,float d)
{
    return c+d/2;   
}
float areaf(int s)
{
    float area;
    area = s*s;
    return area;    
}
float areaf(int l, int b)
{
    float area;
    area = l*b;
    return area;    
}
float areaf(float h, float b)
{
    float area;
    area = 0.5*h*b;
    return area;    
}
float areaf(float r)
{
    float area;
    area = 3.14*r*r;
    return area;    
}
double powerf(int a,int b=2)
{
    double power;
    power = pow(a,b);
    return power;    
}
void powerf(char e,int b=2)
{
    cout<<e*b;   
}
double powerf(float c,int b=2)
{
    double power;
    power = pow(c,b);
    return power;    
}
double powerf(double f,int b=2)
{
    double power;
    power = pow(f,b);
    return power;     
}

int main()
{
    int a,b,choice;
    float c,d;
    char e;
    double f;
    cout
    <<"1 for avg int and int"<<endl
    <<"2 for avg int and float"<<endl
    <<"3 for avg float and int"<<endl
    <<"4 for avg float and float"<<endl
    <<"5 for area of square"<<endl
    <<"6 for area of rectangle"<<endl
    <<"7 for area of triangle"<<endl
    <<"8 for area of circle"<<endl
    <<"9 for pow of int "<<endl
    <<"10 for pow of char"<<endl
    <<"11 for pow of float"<<endl
    <<"12 for pow of double"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cin>>a>>b;
        cout<<avgf(a,b);
        break;

        case 2:
        cin>>a>>d;
        cout<<avgf(a,d);
        break;

        case 3:
        cin>>c>>b;
        cout<<avgf(c,b);
        break;

        case 4:
        cin>>c>>d;
        cout<<avgf(c,d);
        break;

        case 5:
        cin>>a;
        cout<<areaf(a);
        break;

        case 6:
        cin>>a>>b;
        cout<<areaf(a,b);
        break;

        case 7:
        cin>>c>>d;
        cout<<areaf(c,d);
        break;

        case 8:
        cin>>c;
        cout<<areaf(c);
        break;

        case 9:
        cin>>a>>b;
        cout<<powerf(a,b);
        break;
        
        case 10:
        cin>>e>>b;
        powerf(e,b);
        break;

        case 11:
        cin>>c>>b;
        cout<<powerf(c,b);
        break;

        case 12:
        cin>>f>>b;
        cout<<powerf(f,b);
        break;

        default:
        cout<<"Invalid Input";
        break;
    }
}
