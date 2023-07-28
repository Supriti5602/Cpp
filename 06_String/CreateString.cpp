#include<iostream>
using namespace std;

int main()
{
    char S1[10]="Hello";
    cout<<S1<<endl;//Hello
    
    char S2[]="Supriti";
    cout<<S2<<endl;//Supriti
    
    char S3[]={'W','o','r','l','d','\0'};
    cout<<S3<<endl;//World

    char S4[]={'W','o','r','l','d','\0','p','x','u'};
    cout<<S4<<endl;//World

    char S5[]={65,66,67,68,71,'\0'};
    cout<<S5<<endl;//ABCDG

    char S6[]={65,66,67,68,71,0};
    cout<<S6<<endl;//ABCDG

    char S7[]={65,66,67,68,71,0,72,73};
    cout<<S7<<endl;//ABCDG

    char *S8="Neha";
    cout<<S8<<endl;//Neha

    string S9="Student";
    cout<<S9<<endl;//Student

    return 0;
}