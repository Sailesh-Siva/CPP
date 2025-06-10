#include<iostream>
#include<cmath>
using namespace std;
int s1()
{
    int num,sum=0,n;
    cout<<"Enter the number\n";
    cin>>n;
    for(num=0;num<n+1;num+=1)
    {
	    sum = sum + num;
    }
    cout<<"Sum upto n "<<sum;;
}
int s2()
{
    int num,sum=0,n;
    cout<<"Enter the number\n";
    cin>>n;
    for(num=1;num<n+1;num+=2)
    {
        sum = sum + num;
    }
    cout<<"Sum upto n odd only "<<sum;
}
int s3()
{
    int num,sum=0,n;
    cout<<"Enter the number\n";
    cin>>n;
    for(num=2;num<n+1;num+=2)
    {
	    sum = sum + num;
    }
    cout<<"Sum upto n even only "<<sum;
    return 0;
}
int s4()
{
    int num,sum=0,n1,n2;
    cout<<"Enter the two numbers\n";
    cin>>n1>>n2;
    for(num=n1;num<n2+1;num+=1)
    {
	    sum = sum + num;
    }
    cout<<"Sum between two given numbers "<<sum;
    return 0;
}
int s5()
{
    int num,sum=0,n1,n2,nstart;
    cout<<"Enter the two numbers\n";
    cin>>n1>>n2;
    if(n1%2==0)
    {
        nstart=n1+1;
    }
    else
    {
        nstart=n1;   
    }
    
    for(num=nstart;num<n2+1;num+=2)
    {
	    sum = sum + num;
    }
    cout<<"Sum between two given numbers "<<sum;
    return 0;
}
int s6()
{
    int num,sum=0,n1,n2,nstart;
    cout<<"Enter the two numbers\n";
    cin>>n1>>n2;
        if(n1%2==0)
    {
        nstart=n1;
    }
    else
    {
        nstart=n1+1;   
    }
    for(num=nstart;num<n2+1;num+=2)
    {
	    sum = sum + num;
    }
    cout<<"Sum between two given numbers "<<sum;
    return 0;
}
int s7()
{
    int num,sum=0,n;
    cout<<"Enter the numbers\n";
    cin>>n;
    for(num=1;num<n+1;num+=1)
    {
	    sum = sum + pow(num,2);
    }
    cout<<"Sum of powers "<<sum;
    return 0;
}
int s8()
{
    int num,sum=0,n;
    cout<<"Enter the numbers\n";
    cin>>n;
    for(num=1;num<n+1;num+=1)
    {
	    sum = sum + pow(num,3);
    }
    cout<<"Sum of powers "<<sum;
    return 0;
}
int s9()
{
    int num,sum=0,n1,n2,n3;
    cout<<"Enter the two numbers\n";
    cin>>n1>>n2;
    cout<<"Enter the divisor\n";
    cin>>n3;
    for(num=n1;num<n2+1;num+=1)
    {
        if(num%n3==0)
        {
            sum = sum + num;
        }   
    }
    cout<<"Sum between two given numbers "<<sum;
    return 0;
}

int main()
{
    int choice;
    cout<<"Enter the choice\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        s1();
        break;

        case 2:
        s2();
        break;

        case 3:
        s3();
        break;

        case 4:
        s4();
        break;

        case 5:
        s5();
        break;

        case 6:
        s6();
        break;

        case 7:
        s7();
        break;

        case 8:
        s8();
        break;

        case 9:
        s9();
        break;
        

        default:
        printf("Invalid Input");
        break;
    }
}