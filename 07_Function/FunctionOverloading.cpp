#include <iostream>
using namespace std;

int sum(int x,int y)
{
    return x+y;
}

int sum(int x,int y,int z)
{
    return x+y+z;
}
float sum(float x,float y)
{
    float z;
    z=x+y;
    return z;
}

int main()
{
    int a,b,c,d;
    float i,j,k;
    cin>>a>>b;
   
    c=sum(a,b);
    d=sum(a,b,c);
    cout<<"Sum is "<<c<<endl;
    cout<<"Sum is "<<d<<endl;
     cin>>i>>j;
     k=sum(i,j);
     cout<<"Sum is "<<k<<endl;
    return 0;
}