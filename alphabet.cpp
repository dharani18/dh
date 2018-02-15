#include <iostream>

using namespace std;
class A
{ 
    public:
    char s;
    void get()
    {
   cout<<"Enter s";
   cin>>s;
    
   if(s>='a'&&s<='z'||s>='A'&&s<='Z')
  
       cout<<"alphabet";
       else
       cout<<"invalid";
   
    }
};
int main()
{
    A a;
    a.get();
    return 0;
}
