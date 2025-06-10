#include<iostream>
#include<string>
using namespace std;
struct node
{
    char data;
    node *link;
};
struct stackmetadata
{
    int count;
    node *first;
};
class Stack
{
    public:
    stackmetadata *sm;
    Stack()
    {
        sm = new stackmetadata();
        sm->count=0;
        sm->first=NULL;
    }
    void push(char d)
    {
        node *t=new node();
        t->data=d;
        t->link=sm->first;
        sm->first=t;
        sm->count++;
    }
    char pop()
    {
        if(sm->first!=NULL)
        {
            char d;
            node *t=sm->first;
            d=t->data;
            sm->first=t->link;
            delete t;
            sm->count--;
            return d;
        }
    }
    char stacktop()
    {
       if(sm->first!=NULL)
        {
            return sm->first->data;
        }
    }
    int priority(char c)
    {
        if(c=='^')
            return 3;
        else if(c=='*' || c=='/')
            return 2;
        else if(c=='+' || c=='-')
            return 1;
        else
            return 0;
    }
    bool stackempty()
    {
        if(sm->count==0)
            return true;
        else
            return false;
    }
};
int main()
{
    string s,e;
    Stack st;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            st.push(s[i]);    
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='+' || s[i]=='*' || s[i]=='/' || s[i]=='^')
        {
            while(!st.stackempty() && st.priority(st.stacktop())>=st.priority(s[i]))
            {
                e+=st.pop();
            } 
            st.push(s[i]);
        }
        if(s[i]==')')
        {
            char g=st.pop();
            while(!st.stackempty() && g!='(')
            {
                e=g;
                g=st.pop();
            }    
        }
        else
        {
            e+=s[i];
        }
    }
    while(!st.stackempty())
    {
        e+=st.pop();
    }
    cout<<e;
}