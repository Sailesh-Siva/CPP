#include<iostream>
using namespace std;
void month_name(int i)
{
    switch(i)
    {
        case 1:
        month_name;
        cout<<month_name;
        break;

        case 2:
        cout<<"Feb";
        break;
        
        case 3:
        cout<<"Mar";
        break;
        
        case 4:
        cout<<"Apr";
        break;
        
        case 5:
        cout<<"May";
        break;
        
        case 6:
        cout<<"Jun";
        break;
        
        case 7:
        cout<<"Jul";
        break;
        
        case 8:
        cout<<"Aug";
        break;
        
        case 9:
        cout<<"Sep";
        break;
        
        case 10:
        cout<<"Oct";
        break;
        
        case 11:
        cout<<"Nov";
        break;
        
        case 12:
        cout<<"Dec";
        break;

    }
}
int main()
{
    int i;
    cout<<"Enter Choice\n";
    cin>>i;
    month_name(i);
    return 0;
}
