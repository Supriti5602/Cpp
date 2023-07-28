#include <iostream>
using namespace std;
int main()
{
    float A[] = {2.55f, 5.28f, -6.3f, 8.7f, 87};
    for (auto i : A)
    {
        cout << i << " ";
    }
}

//if we use auto we don't have to know which type of array we have declared.

//  O/P- 2.55 5.28 -6.3 8.7 87 