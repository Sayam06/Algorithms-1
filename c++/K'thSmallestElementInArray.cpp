#include <algorithm> 
#include <iostream> 
using namespace std; 
   
int smallest(int arr[], int n, int k) { 
    
    sort(arr, arr + n); 
  
    return arr[k - 1]; 
} 

int main(){
    int a[5] = {10,5,7,20,13};
    int n = sizeof(arr) / sizeof(arr[0]),k=0;
    cin>>k;
    cout<<smallest(a, n, k);
    return 0;
} 