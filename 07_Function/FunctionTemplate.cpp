#include<iostream>
using namespace std;


//function template for 2 numbers
template<class T>
T Max(T n1,T n2) {
  
  T result = (n1 >=n2) ? n1 : n2;
  return result;

}

int main()
{
    cout<<Max(10,5)<<endl;//integer - 10
    cout<<Max(12.5f,17.3f)<<endl;//float - 17.3
    cout<<Max(1.598766,0.3667777);//double - 1.59877

    return 0;
}
