#include <iostream>
using namespace std ;
int main()
{
    int A[]={4,8,6,9,5,2,7};
    int max=0;
    for(int i :A){
        if(max<i){
            max=i;
        }
    }
    cout<<"Maximum Element is "<<max;
}
// O/p - Sum is 41