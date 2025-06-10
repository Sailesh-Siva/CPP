#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<iomanip>
//950
using namespace std;
class Student
{
    public:
    char Name[50];
    char Degree[50];
    int rollno;
    float CGPA;

    Student()
    {
        rollno=0;
        CGPA=0;
    }
    void stuin()
    {
        cin>>Name>>Degree>>rollno>>CGPA;

    }
    void stuout()
    {
        cout<<Name<<endl<<Degree<<endl<<rollno<<endl<<CGPA<<endl;
    }
};
int main()
{
    Student x[2],xf[2];
    for(int i=0;i<2;i++)
    {
        x[i].stuin();
    }
    fstream f,dis,fir,sec,fai;
    int disint=0,firint=0,secint=0,faiint=0;
    f.open("STUDENT.DAT",ios :: in | ios :: out | ios :: binary);
    dis.open("DISTINCTION.DAT",ios :: in | ios :: out | ios :: binary);
    fir.open("FIRST.DAT",ios :: in | ios :: out | ios :: binary);
    sec.open("SECOND.DAT",ios :: in | ios :: out | ios :: binary);
    fai.open("FAIL.DAT",ios :: in | ios :: out | ios :: binary);
    for(int j=0;j<2;j++)
    {
        f.write((char*)&x[j],sizeof(x[j]));
    }
    cout<<"Input Done"<<endl;
    f.seekg(0);
    f.seekp(0);
    dis.seekg(0);
    dis.seekp(0);
    for(int j=0;j<2;j++)
    {
        
        Student xf;
        f.read((char*)&xf,sizeof(xf));
        if(xf.CGPA>7.5)
        {
            dis.write((char*)&xf,sizeof(xf));
            disint+=1;
        }
        else if(xf.CGPA>6.0 && xf.CGPA<7.5)
        {
            fir.write((char*)&xf,sizeof(xf));
            firint+=1;
        }
        else if(xf.CGPA>5.0 && xf.CGPA<6.5)
        {
            sec.write((char*)&xf,sizeof(xf));
            secint+=1;
        }
        else if(xf.CGPA<5.0)
        {
            fai.write((char*)&xf,sizeof(xf));
            faiint+=1;
        }
        
    }
    dis.seekp(0);
    fir.seekp(0);
    sec.seekp(0);
    fai.seekp(0);

    for(int i=0;i<disint;i++)
    {
        Student a;
        dis.read((char*)&a,sizeof(a));
        a.stuout();
        cout<<"check"<<endl;  
    }
    cout<<"FILE DIS DONE"<<endl;
    for(int i=0;i<firint;i++)
    {
        Student a;
        fir.read((char*)&a,sizeof(a));
        a.stuout();
        cout<<"check"<<endl;  
    } 
    cout<<"FILE FIR DONE"<<endl;
    for(int i=0;i<secint;i++)
    {
        Student a;
        sec.read((char*)&a,sizeof(a));
        a.stuout();
        cout<<"check"<<endl;  
    } 
    cout<<"FILE SEC DONE"<<endl;
    for(int i=0;i<faiint;i++)
    {
        Student a;
        fai.read((char*)&a,sizeof(a));
        a.stuout();
        cout<<"check"<<endl;  
    }    
    cout<<"FILE FAIL DONE"<<endl;
}