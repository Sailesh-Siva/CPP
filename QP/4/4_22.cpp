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
        stop_rate=No_of_defended_goal/count;
    }
    friend float calc_bestg(GKeeper)
    {}
    void input()
    {
        cin>>Name;
        cin>>playerID;
        cin>>count;
        cin>>No_of_defended_goal;
        stop_rate=No_of_defended_goal/count;
    }
    void output()
    {
        cout<<Name;
        cout<<playerID;
        cout<<count;
        cout<<No_of_defended_goal;
        cout<<stop_rate;
    }
};
int GKeeper :: bestg;
int GKeeper :: bestgid;
float calc_bestg(GKeeper x) 
{
    int a;
    if(x.stop_rate>x.bestg)
    {
        x.bestg=x.stop_rate;
        x.bestgid=x.playerID;
    }
    a=x.bestgid;
    return a;
}



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
    float calc_bestp()
    {
        if(goal_count>bestp)
        {
            bestp=goal_count;
            bestpid=playerID;
        }
        return bestpid;
    }
    void input()
    {
        cin>>Name;
        cin>>playerID;
        cin>>count;
        cin>>goal_count;
        calc_bestp();
    }
    void output()
    {
        cout<<Name;
        cout<<playerID;
        cout<<count;
        cout<<goal_count;
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

    calc_bestg(a[0]);
    b[1].calc_bestp();

    a[0].output();
    a[1].output();

    b[0].output();
    b[1].output();
}
