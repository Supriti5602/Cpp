//The cin is a predefined object of istream class. It is connected with the standard input device, which is usually a keyboard. The cin is used in conjunction with stream extraction operator (>>) to read the input from a console.


#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"Your age :"<< age << endl;

    return 0;
}