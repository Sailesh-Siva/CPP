#include<iostream>
#include<string>
using namespace std;
class MyStringArray
{
    public:
    string s[5];
    void sin()
    {
        for(int i=0;i<5;i++)
        {
            getline(cin,s[i]);
        }
    }
    void sdisplay()
    {
        cout<<"Display"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<s[i]<<endl;
        } 
    }
    void operator +()
    {
        for(int i=0;i<5;i++)
        {
            for (int j=i;j<5;j++)
            {
                if(s[i]>s[j])
                {
                    s[i].swap(s[j]);
                }
            }
        }    
    }
    operator int()
    {
        int len=0;
        for(int i=0;i<5;i++)
        {
            len+=s[i].length();
        }
        return len;
    }

};


int main()
{
    MyStringArray a;
    int b;
    a.sin();
    a.sdisplay();
    +a;
    a.sdisplay();
    b=a;
    cout<<b;
}