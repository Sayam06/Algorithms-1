#include <stdio.h>
int missing(int a[], int n) { 
    int i, sum=1; 
     
    for ( i = 2; i<= (n+1); i++)
    {
        sum+ =i;
        sum -= a[i-2];
    }
    return arr; 
} 
 
int main() {
    int arr[] = {1, 2, 3, 5, 6};
    cout<<missing(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}