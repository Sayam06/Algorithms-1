#include <stdio.h> 
   
int smallest(int arr[], int n, int k) { 
    int i=0,j=0; 
   	for (i = 0; i < n-1; i++){      
       for (j = 0; j < n-i-1; j++){  
           if (arr[j] > arr[j+1]){ 
              int temp = arr[j];
          	  arr[j] = arr[j+1];
              arr[j+1] = temp; 
            }
        }
    }
  
    return arr[k - 1]; 
} 

int main(){
    int a[5] = {10,5,7,20,13};
    int n = 5,k=3;
    
    cout<<smallest(a, n, k);
    return 0;
} 