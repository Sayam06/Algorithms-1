#include <iostream> 
using namespace std; 

int main() {
    int arr[] = { 50,34,1,29,100,9,6,21,12,19 }; 
    int x = 12,i=0,ctr=0; 
    int n = sizeof(arr) / sizeof(arr[0]); 
   
    for (i = 0; i < n; i++) 
        if (arr[i] == x){
            ctr=0;
            break;
        }
         else
            ctr = -1;
            
    if(ctr==-1)
       cout<<"Element not present";
    else
       cout<<"Element present at "<<i;
       
    return 0; 
}
