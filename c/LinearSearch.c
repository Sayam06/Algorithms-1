#include <iostream>
using namespace std; 
  
  
int main() {
    int arr[] = { 112, 33, 24, 40, 10,21,6,8 }; 
    int x = 12,i=0.ctr=0; 
    int n = sizeof(arr) / sizeof(arr[0]); 
   
    for (i = 0; i < n; i++) 
        if (arr[i] == x){
            ctr=0; 
            break;
        }
        else
           ctr=-1;
           
            
    if(ctr==-1)
        printf("Element not present");
    else
        printf("Element present at  %d", result); 
    
    return 0;
}
