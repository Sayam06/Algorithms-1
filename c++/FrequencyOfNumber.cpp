#include<iostream>  
using namespace std; 
  
int find(int a[], int n, int x){ 
    int ctr = 0; 
    for (int i=0; i < n; i++) 
       if (a[i] == x)  
          ctr++; 
    return ctr; 
} 
   
int main() { 
    int arr[] = {0, 5, 5, 5, 4}; 
    int x = 5; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<find(arr, n, x); 
    return 0; 
}  