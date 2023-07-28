#include<iostream>
using namespace std;

int main()
{
    int A[]={8,4,12,37,36,25,-2,10,15,25};
    int min=A[0];
    
    //write a loop to find minimum number
     for(int i :A){
        if(min>i){
            min=i;
        }
    }
    cout<<min;
    return 0;
}