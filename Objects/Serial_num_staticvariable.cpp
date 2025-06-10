#include<iostream>
#include<string>
using namespace std;
class serial
{
    static int n;
    int obj_n;
    public:
        serial()
        {
            n+=1;
            obj_n=n;
        }
        void display()
        {
            cout<<"I am object "<<obj_n<<endl;
        }
};
int serial::n=0;
int main()
{
    serial s1,s2,s3;
    s1.display();
    s2.display();
    s3.display();

    return 0;
    
}
