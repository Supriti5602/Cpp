#include <iostream>
using namespace std;

float sum(float x,float y)
{
    float z;
    z=x+y;
    return z;
}

int main()
{
    float x,y,z;
    cin>>x>>y;
    z=sum(x,y);
    cout<<"Sum is "<<z<<endl;
    return 0;
}