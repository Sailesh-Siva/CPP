#include<iostream>
#include<string>
using namespace std;
class tollbooth
{
    unsigned int n;
    double total;
    public:
        tollbooth()
        {
            n=0;
            total=0;
        }
        void payingCar()
        {
            n+=1;
            total+=50.75;
        }
        void nonpayingCar()
        {
            n+=1;
        }
        void display()
        {
            cout<<"Number of cars "<<n<<endl
                <<"Premium Account "<<total<<endl;
        }
};
int main()
{
    tollbooth t;
    int choice=1,option;

    while(choice == 1)
    {
        cout<<endl<<"Press 1 for paying car"<<endl
            <<"Press 2 for nonpaying car"<<endl
            <<"Press 3 to display number of cars and total cash"<<endl
            <<"Press 4 to exit"<<endl<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
            t.payingCar();
            break;
            
            case 2:
            t.nonpayingCar();
            break;

            case 3:
            t.display();
            break;

            case 4:
            choice=0;
            break;

            default:
            choice=1;
            break;
        }

    }
    return 0;
}
