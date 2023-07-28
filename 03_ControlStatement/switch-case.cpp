#include <iostream>  
using namespace std;  
int main () {  
       float num1,num2;  
       cout<<"Enter the first number : ";    
       cin>>num1;  
       cout<<"Enter the second number : ";    
       cin>>num2;
       char op;
       cout << "Enter operator: (+, -, *, /) : ";
       cin >> op;
           switch (op)    
          {    
                case '+':
                        cout << num1 << " + " << num2 << " = " << num1 + num2;
                break; 
                case '-':
                        cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
                case '*':
                        cout << num1 << " x " << num2 << " = " << num1 * num2;
                break;
                case '/':
                        cout << num1 << " / " << num2 << " = " << num1 / num2;
                break; 
                default: 
                        cout << "Error! operator is not correct";
                break;    
          }    
    }    