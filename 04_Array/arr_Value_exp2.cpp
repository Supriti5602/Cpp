// #include <iostream>
// using namespace std ;
// int main()
// {
//     int A[5]={3,4,5,12,13,4502};
//     for(int i=0;i<5;i++){
//         cout<<A[i]<<endl;
//     }
// }

//Output - Compiler Time Error

#include <iostream>
using namespace std ;
int main()
{
    int A[5]={0};
    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
}

//Output -
/*
0
0
0
0
0
*/