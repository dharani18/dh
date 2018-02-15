#include <iostream>

using namespace std;
class A
{ 
    public:
    int a,b,c;
    void get()
    {
   cout<<"Enter the value a,b,c";
   cin>>a>>b>>c;
     if(a>b)
  {  
      if(a>c)
       cout<<"a is greater";
       else
       cout<<"c is greater";

    }
   else
    {
        if(b>c)
         cout<<"b is greater";
       else
       cout<<"c is greater";
    }
    }
};
int main()
{
    A a;
    a.get();
    return 0;
}
