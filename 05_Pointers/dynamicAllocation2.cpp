#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter number of elements  ";
    cin>>size;
    int *p=new int[size];
    cout<<"Enter new size ";
    cin>>size;
    p=new int[size];
    //cout<<sizeof p<<endl;

    return 0;
}


/*

int *p=new int[20];

delete []p;
p=new int[40];

*/