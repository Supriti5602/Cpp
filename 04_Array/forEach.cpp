//Useful for array or collection type of data structure

#include <iostream>
using namespace std ;
int main()
{
    int A[]={2,5,8,-5,-85,-68,87,456};
    for(int i : A){
        cout<<i<<" ";
    }
}
//Output - 2 5 8 -5 -85 -68 87 456 