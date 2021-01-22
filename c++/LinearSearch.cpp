#include <iostream> 
using namespace std; 

void main() {
    int arr[] = { 50,34,1,29,100,9,,21,12,19 }; 
    int x = 12,i=0; 
    int n = sizeof(arr) / sizeof(arr[0]); 
   
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            break;
         else
            i = -1;
            
    if(i==-1)
       cout<<"Element not present";
    else
       cout<<"Element present at "<<i;
       
    getch(); 
}
