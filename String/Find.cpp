#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1="welcome to SASTRA Deemed University";
   
    int n;
   
    n=s1.find("me");  //(search from begining)output : 5 (index position of the pattern "me" is 5 in s1)
   
    cout<<n<<"\n";
   
    n=s1.rfind("me"); // (search from reverse)output : 21 (index position of the pattern "me" is 21 in s1)
   
    cout<<n;
   
    n=s1.find_first_of("lw");  // output :1
 
    /* The find_first_of() function looks for any of a group of characters, and returns the position
    of the first one it finds. Here it looks for any of the group ‘m’, ‘e’. The first of
    these it finds is the ‘e’ in string s1, at position 1.*/
    cout<<"\n"<<n;
     
    return 0;
}