//540
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
class MyString
{
    public:
    char s[20];
    void input()
    {
        getline(cin,s,'#');
    }
    void display()
    {
        cout<<s;
    }
    string modify(string m)
    {
        int a;
        m.replace(0,1,"$");
        a=m.find(' ');
        while(a!=-1)
        {
            m.replace(a+1,1,);
            a=m.find(' ',a+1);
        }
        cout<<m;
        return m;
        
    }
};
int main()
{
    MyString x;
    string z;
    fstream xf,yf;
    xf.open("INPUT.txt",ios :: in | ios :: out | ios :: trunc);
    yf.open("WORD.dat",ios :: in | ios :: app);
    //x.input();
    //xf<<x.s;
    //xf.seekp(0);
    x.modify("Sailesh is checking\n any errors ithe code \n but find");
   /* while(!xf.eof())
    {
        getline(xf,z,'#');
        xf<<x.modify(z);
    }
    */
    
}