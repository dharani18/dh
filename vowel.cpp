#include <iostream>

using namespace std;
class A
{
    char n;
    public:
    void get()
    {
    cin>>n;
        if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
        cout<<"vowel";
        else
        cout<<"constant";
    }
};
    int main()
    {
        A a;
    a.get();
    return 0;
    }
