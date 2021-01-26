#include <stdio.h> 
 
int main(){ 
 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = 7; 
    int rotate = 2;
    int i; 
    for (i = 0; i < rotate; i++) 
        int temp = arr[0], j; 
        for (j = 0;j < n - 1;j++) 
            arr[j] = arr[j+1]; 
        arr[j] = temp; 
 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    return 0; 
} 