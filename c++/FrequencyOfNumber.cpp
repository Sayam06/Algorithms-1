#include<iostream>  
using namespace std; 
  
int find(int a[], int n, int x){ 
    int ctr = 0; 

    for (int i=0;i < n;i++) 
       if (a[i] == x)  
          ctr++; 

    return ctr; 
} 
   
int main() { 
    int arr[] = {2002,1,12,12,12,22,1,2001,10}; 
    int x = 12; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    cout<<find(arr, n, x);

    return 0; 
}  