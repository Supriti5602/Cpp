#include <iostream>
using namespace std;

int main()
{
    int A[10], key, x = 0, y;
    cout<<"Enter the array elements :- ";
    for (int i = 0; i < 10; i++)
    {
        cin >> A[i];
    }
    cout << "Enter Key :- ";
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == key)
        {
            x = 1;
            y = i;
        }
    }

    if(x==1)
    {
        cout<<"The key is found at the position " <<y+1;
    }
    else{
        cout<<"The key is not found.";
    }
}