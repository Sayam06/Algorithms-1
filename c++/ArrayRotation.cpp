#include <iostream> 
using namespace std; 
  
int main(){ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int rotate = 2;   

    for (int i = 0;i < rotate;i++){ 
        int temp = arr[0];
        int j; 
        for (j = 0;j <n - 1;j++) 
            arr[j] = arr[j + 1]; 
  
        arr[j] = temp; 
    }  
    
    for (int i = 0; i < n; i++) 
        cout<<arr[i]; 
  
    return 0; 
} 