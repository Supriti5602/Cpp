#include<iostream>
using namespace std;

int main()
{
    int x=100;
    int *p=&x;

    cout<<x<<endl;  //100
    cout<<&x<<endl; //0x61ff0c
    cout<<p<<endl;  //0x61ff0c
    cout<<&p<<endl; //0x61ff08
    cout<<*p<<endl; //100

    return 0;
}