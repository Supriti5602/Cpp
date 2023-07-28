#include <iostream>
using namespace std;

int maximum(int n1,int n2,int n3) {
  
 int max = (n1 >= n2) ?
          (n1 >= n3 ? n1 : n3) :
          (n2 >= n3 ? n2 : n3);

  return max;
}

int main()
{
    int w,x,y,z;
    cin>>w>>x>>y;
    z=maximum(w,x,y);
    cout<<"The maximum number is  "<<z<<endl;
    return 0;
}