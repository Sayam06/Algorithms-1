#include <stdio.h>   

int main() 
{ 
    int arr[] = {14,1,13,7,50,12,60}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int i=0, j=0; 
    for (i = 0; i < n-1; i++)      
      for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              int temp = arr[j]; 
              arr[j] = arr[j+1]; 
              arr[j+1] = temp;

    printf("Sorted array is:\n"); 
    
    i=0; 
    for (i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    
    return 0; 
} 