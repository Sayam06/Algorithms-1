#include <iostream> 
using namespace std; 
  
void leaders(int arr[], int n){
    int maxright =  arr[n-1]; 
  
    cout<<maxright; 
      
    for (int i =n-2;i >= 0;i--) { 
        if (maxright <= arr[i]) {            
            maxright = arr[i]; 
            cout << maxright; 
        } 
    }     
} 
  
int main

    int arr[] = {21, 20, 50, 2, 18, 11 , 3, 6, 0}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    leaders(arr, n); 
    return 0; 
}