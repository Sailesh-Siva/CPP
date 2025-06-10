#include <iostream>
#include <string>
using namespace std;

class Bank 
{
    protected:
    static int acc_no_stat;
    int  acc_no,acc_balance;
    string cus_name,acc_type;
    public:
    Bank()
    {}
    Bank(string a, string b,int c)
    {
        acc_no=acc_no_stat;
        cus_name=b; 
        acc_type=c;
        acc_balance=c; 
        acc_no_stat+=1;
    }
    void deposit(int a)
    {
        acc_balance+=a;
    }
    void withdraw(int b)
    {
        acc_balance-=b;
    }
    int accountBalance()
    {
        return acc_balance;
    }
};
int Bank::acc_no_stat=100;

class SavingsAccount : public Bank
{
    protected:
    int interest;
    public:
    SavingsAccount()
    {}
    SavingsAccount(string a, string b,int c): Bank(a,b,c)
    {}
    int calculateInterest() 
    {
        if(acc_balance >=0 && acc_balance<=1000)
        {
            interest=0;
            
        }
        else if(acc_balance >=1001 && acc_balance<=5000)
        {
            interest=0.035*acc_balance;
        }
        else if(acc_balance >5000)
        {
            interest=0.04*acc_balance;
        }
        acc_balance+=interest;
        return interest;
    }
};

class CurrentAccount : public Bank
{
    protected:
    int interest;
    public:
    CurrentAccount()
    {}
    CurrentAccount(string a, string b,int c): Bank(a,b,c)
    {}
    int calculateInterest() 
    {
        if(acc_balance >=0 && acc_balance<=2000)
        {
            interest=0;
        }
        else if(acc_balance >=2001 && acc_balance<=6000)
        {
            interest=0.04*acc_balance;
        }
        else if(acc_balance >5000)
        {
            interest=0.05*acc_balance;
        }
        acc_balance+=interest;
        return interest;
    }
};

int main() 
{
    int  m_acc_no,m_acc_balance;
    string m_cus_name,m_acc_type;
    cout<<"Enter Customer Name"<<endl;
    getline(cin,m_cus_name);
    cout<<"Enter Account Type"<<endl;
    getline(cin,m_acc_type);
    cout<<"Enter Account Balance"<<endl;
    cin>>m_acc_balance;
    if(m_acc_type == "SA")
    {
        bool con=1;
        int choice;
        SavingsAccount x(m_cus_name,m_acc_type,m_acc_balance);  
        while(con)
        {
            cout<<"Enter 1 to deposit,2 to withdraw, 3 to account balance,4 for calculating interest,5 for exit"<<endl;
            cin>>choice;
            if(choice==1)
            {
                int deposit;
                cout<<"Enter deposit amt"<<endl;
                cin>>deposit;
                x.deposit(deposit);
            }
            else if(choice==2)
            {
                int withdraw;
                cout<<"Enter withdraw amt"<<endl;
                cin>>withdraw;
                x.withdraw(withdraw);
            }
            else if(choice==3)
            {
                cout<<x.accountBalance()<<endl;
            }
            else if(choice==4)
            {
                cout<<x.calculateInterest()<<endl;
            }
            else if(choice==5)
            {
                con=0;
            }
        } 
    }
    if(m_acc_type == "CA")
    {
        bool con=1;
        int choice;
        CurrentAccount y(m_cus_name,m_acc_type,m_acc_balance);  
        while(con)
        {
            cout<<"Enter 1 to deposit,2 to withdraw, 3 to account balance,4 for calculating interest,5 for exit"<<endl;
            cin>>choice;
            if(choice==1)
            {
                int deposit;
                cout<<"Enter deposit amt"<<endl;
                cin>>deposit;
                y.deposit(deposit);
            }
            else if(choice==2)
            {
                int withdraw;
                cout<<"Enter withdraw amt"<<endl;
                cin>>withdraw;
                y.withdraw(withdraw);
            }
            else if(choice==3)
            {
                cout<<y.accountBalance()<<endl;
            }
            else if(choice==4)
            {
                cout<<y.calculateInterest()<<endl;
            }
            else if(choice==5)
            {
                con=0;
            }
        } 
    }
    return 0;
}