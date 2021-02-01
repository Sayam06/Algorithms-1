#include<stdio.h>  
  
int find(int a[], int n, int x){ 
    int ctr = 0,i=0; 

    for (i=0;i < n;i++) 
       if (a[i] == x)  
          ctr++; 

    return ctr; 
} 
   
int main() { 
    int arr[] = {2002,1,12,12,12,22,1,2001,10}; 
    int x = 12; 
    int n = 9; 

    int res = find(arr, n, x);

    printf("%d",res);

    return 0; 
}  