#include<iostream>
using namespace std;


// Min of 2 integers
int Min(int n1,int n2) {
  
  int result = (n1 <=n2) ? n1 : n2;

  return result;
}
//Min of 3 integers
int Min(int n1,int n2,int n3) {
  
 int mini = (n1 <= n2) ?
          (n1 <= n3 ? n1 : n3) :
          (n2 <= n3 ? n2 : n3);

  return mini;
}
//Min of 2 floats
float Min(float n1,float n2) {
  
  float result = (n1 <=n2) ? n1 : n2;

  return result;
}

int main()
{
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.0f,9.0f)<<endl;
    return 0;
}
