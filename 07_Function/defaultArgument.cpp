#include <iostream>
using namespace std;

int sum(int x=0,int y=0,int z=0)
{
    return x+y+z;
}

int main()
{
    int a,b,c,d;
   
    a=sum();
    b=sum(100);
    c=sum(100,456);
    d=sum(5,6,7);
    cout<<"Sum is "<<a<<endl;
    cout<<"Sum is "<<b<<endl;
    cout<<"Sum is "<<c<<endl;
    cout<<"Sum is "<<d<<endl;
    return 0;
}