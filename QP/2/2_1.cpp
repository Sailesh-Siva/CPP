#include<iostream>
#include<string>
using namespace std;

class MyStringArray
{
    string s[5];
    public:
    MyStringArray()
    {

    }
    void s_input()
    {
        for(int i=0;i<5;i++)
        {
            getline(cin,s[i]);
        }
    }
    void s_output()
    {
        for(int i=0;i<5;i++)
        {
            cout<<s[i]<<endl;
        }
    }
    void operator +()
    {
        for(int i=0;i<5;i++)
        {
            for(int j=i;j<5;j++)
            {
                if(s[i].compare(s[j])>1)
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
    }
};
int main()
{
    int x;
    MyStringArray y;
    y.s_input();
    y.s_output();
    +y;
    y.s_output();
    x=y;
    cout<<x;
}