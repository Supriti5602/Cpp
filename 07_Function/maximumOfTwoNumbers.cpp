#include <iostream>
using namespace std;

int maximum(int n1,int n2) {
  
  int result = (n1 >=n2) ? n1 : n2;

  return result;
}

int main()
{
    int x,y,z;
    cin>>x>>y;
    z=maximum(x,y);
    cout<<"The maximum number is  "<<z<<endl;
    return 0;
}