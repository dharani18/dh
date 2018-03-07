#include<iostream>
using namespace std;
int summ(int a, int b);
int main()
{
    int x,y;
    cout<<"Enter x value: ";
    cin>>x;
    cout<<"Enter y value: ";
    cin>>y;
    summ(x,y);
    cout<<'n';
    system("pause");
    return 0;
}
int summ(int a,int b)
{
    int sum;
    for(a=0;a<=b;a++)
    sum=a*a+b*b;
    cout<<"Output is: "<<sum<<endl;
    return sum;
  
}
