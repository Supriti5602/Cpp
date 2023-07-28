#include <iostream>  
using namespace std;  
int main() {  
     int i = 3;    
         do{    
              int j = 1;          
              do{    
                cout<<i<<" "<<j<<"\n";        
                  j++;    
              } while (j <= 3) ;    
              i++;    
          } while (i <= 5) ;     
}  