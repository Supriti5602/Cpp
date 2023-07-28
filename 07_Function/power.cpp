#include <iostream>
using namespace std;

void pow(int b,int e)
{
    int res =1;
    while (e !=0)
    {
        res *=b;
        --e;
    }
    cout<<res;
    
}
int main()
{
    int x,y,z;
    cin>>x>>y;
    pow(x,y);
   
    return 0;
}