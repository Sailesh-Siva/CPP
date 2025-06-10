#include<iostream>
using namespace std;
class rational
{
    int num,den;
    public:
        rational()
        {
            num=0;
            den=0;
        }
        rational(int a, int b)
        {
            num=a;
            den=b;
        }
        void add(rational a,rational b)
        {
            int x;
            if(a.den==b.den)
            {
                num=a.num+b.num;
                den=a.den;
            }
            else
            {
                x=a.den;
                a.num*=b.den;
                a.den*=b.den;
                b.num*=x;
                b.den*=x;
                num=a.num+b.num;
                den=a.den;
            }
        }
        void subtract(rational a,rational b)
        {
            int x;
            if(a.den==b.den)
            {
                num=a.num-b.num;
                den=a.den;
            }
            else
            {
                x=a.den;
                a.num*=b.den;
                a.den*=b.den;
                b.num*=x;
                b.den*=x;
                num=a.num-b.num;
                den=a.den;
            }
            
        }
        void display()
        {
            cout<<num<<"/"<<den<<endl;
        }
};
int main()
{
    rational r1;
    int num,den;
    cout<<"Enter the numerator and denominator of 1st rational number"<<endl;
    cin>>num>>den;
    rational r2(num,den);
    cout<<"Enter the numerator and denominator of 2nd rational number"<<endl;
    cin>>num>>den;
    rational r3(num,den);
    r1.add(r2,r3);
    r1.display();
    r1.subtract(r2,r3);
    r1.display();
    return 0;
}