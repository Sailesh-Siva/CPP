//750
#include<iostream>
#include<string>
using namespace std;
class Person
{
    public:
    int playerID,count;
    string Name;
    Person()
    {}
    Person(string a,int b,int c)
    {
        Name=a;
        playerID=b;
    }
};

class GKeeper : public Person
{
    public:
    int No_of_defended_goal;
    float stop_rate;
    static int bestg,bestgid; 
    GKeeper()
    {
        No_of_defended_goal=0;
        stop_rate=0;
    }
    GKeeper(string a,int b,int c,int d) : Person(a,b,c)
    {
        No_of_defended_goal=d;
        stop_rate=(No_of_defended_goal*1.0)/count;
    }
    void calc_bestg()
    {
        if(stop_rate>bestg)
        {
            bestg=stop_rate;
            bestgid=playerID;
        }
    }
    float bg()
    {
        return bestgid;
    }
    void input()
    {
        cin>>Name;
        cin>>playerID;
        cin>>count;
        cin>>No_of_defended_goal;
        stop_rate=(No_of_defended_goal*1.0)/count;
        calc_bestg();
        cout<<"next";
    }
    void output()
    {
        cout<<Name<<endl;
        cout<<playerID<<endl;
        cout<<count<<endl;
        cout<<No_of_defended_goal<<endl;
        cout<<stop_rate<<endl;
    }
};
int GKeeper :: bestg;
int GKeeper :: bestgid;




class Player : public Person
{
    public:
    int goal_count;
    static int bestp,bestpid;
    Player()
    {
        goal_count=0;
    }
    Player(string a,int b,int c,int d) : Person(a,b,c)
    {
        goal_count=d;
    }
    void calc_bestp()
    {
        if(goal_count>bestp)
        {
            bestp=goal_count;
            bestpid=playerID;
        }
    }
    float pg()
    {
        return bestpid;
    }
    void input()
    {
        cin>>Name;
        cin>>playerID;
        cin>>count;
        cin>>goal_count;
        calc_bestp();
        cout<<"next";
    }
    void output()
    {
        cout<<Name<<endl;
        cout<<playerID<<endl;
        cout<<count<<endl;
        cout<<goal_count<<endl;
    }
};
int Player :: bestp;
int Player :: bestpid;
int main()
{
    GKeeper a[2];
    Player b[2];  
    a[0].input();
    a[1].input();

    b[0].input();
    b[1].input();

    cout<<endl<<"BestG "<<a[1].bg();
    cout<<endl;
    cout<<"BestP "<<b[1].pg();
    cout<<endl;

    a[0].output();
    a[1].output();

    b[0].output();
    b[1].output();
}
