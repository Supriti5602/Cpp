// #include <iostream>
// using namespace std;
// int main()
// {
//     float A[] = {2.55f, 5.28f, -6.3f, 8.7f, 87};
//     for (int i : A)
//     {
//         cout << i << " ";
//     }
// }

//Output - 2 5 -6 8 87

#include <iostream>
using namespace std;
int main()
{
    float A[] = {2.55f, 5.28f, -6.3f, 8.7f, 87};
    for (float i : A)
    {
        cout << i << " ";
    }
}
//Output - 2.55 5.28 -6.3 8.7 87 