#include<iostream>
using namespace std;
class complex
{
    int r;
    int i;
    public:
    void input()
    {
        cin>>r>>i;
    }
    void add(complex x,complex y)
    {
        r=x.r+y.r;
        i=x.i+y.i;
    }
    void print(); 
};
inline void complex :: print()
{
    cout<<r<<" +i"<<i;
} 
int main()
{
    complex x,y,z; 
    x.input();
    y.input();
    z.add(x,y);
    z.print();

}
