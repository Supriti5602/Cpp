#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 5, 8, 7, 9, 12};
    for (auto i : A)
    {
        cout << ++i << " ";
    }
//3 6 9 8 10 13
    cout<<endl;

    for (auto x : A)
    {
        cout << x << " ";
    }
//2 5 8 7 9 12
     cout<<endl;

    for (auto &y : A)
    {
        cout << ++y << " ";
    }
//3 6 9 8 10 13
     cout<<endl;

    for (auto j : A)
    {
        cout << j << " ";
    }
//3 6 9 8 10 13

}

//Output - 
/*
3 6 9 8 10 13 
2 5 8 7 9 12
3 6 9 8 10 13
3 6 9 8 10 13
*/