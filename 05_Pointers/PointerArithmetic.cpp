//Pointer Arithmetic
/*

int a[5]={2,4,6,8,10};
int *p=a;

1.p++ (Pointer will move forward)
2.p-- (Pointer will move backward)
3.p=p+2
4.p=p-2

int a[5]={2,4,6,8,10};
int *p=a;int *q=&a[3];

distance between two pointers d =q-p;

*/ 

#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    int *p1=A;
    
    // move pointer to next location to print 
    p++;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<p+4<<endl;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<p[-4]<<endl ;  // complete this statement to print 2 without moving pointer
    cout<<"----------------------------------"<<endl ;
    for(int i=0;i<5;i++)
    {
        cout<<i[A]<<endl; 
    }

    cout<<"----------------------------------"<<endl ;

    for(int i=0;i<5;i++)
    {
        cout<<*(A+i)<<endl; 
    }

    cout<<"----------------------------------"<<endl ;

    for(int i=0;i<5;i++)
    {
        cout<<A+i<<endl; 
    }

    cout<<"----------------------------------"<<endl ;

    for(int i=0;i<5;i++)
    {
        cout<<p1+i<<endl; 
    }

    cout<<"----------------------------------"<<endl ;

    for(int i=0;i<5;i++)
    {
        cout<<*(p1+i)<<endl; 
    }
    cout<<"----------------------------------"<<endl ;

    for(int i=0;i<5;i++)
    {
        cout<<p1[i]<<endl; 
    }
    cout<<"----------------------------------"<<endl ;
    cout<<p1<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*p1<<endl; 
        p1++;
    }
    cout<<p1<<endl;
}