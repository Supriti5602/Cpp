#include <iostream>
using namespace std ;
int main()
{
    int A[]={4,8,6,9,5,2,7};
    int sum=0;
    for(int i :A){
        sum=sum+i;
    }
    cout<<"Sum is "<<sum;
}
// O/p - Sum is 41