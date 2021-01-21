#include <stdio>
using namespace std;
 

void bubbleSort(int arr[], int n){
    if (n == 1)
        return;

    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            arr[i] = arr[i] + arr[i+1];
            arr[i+1] = arr[i] - arr[i+1];
            arr[i] = arr[i] - arr[i+1];
 
    bubbleSort(arr, n-1);
}
 

int main(){
    int arr[] = {14,1,13,7,50,12,60};
    int n = sizeof(arr)/sizeof(arr[0]), i=0;
    bubbleSort(arr, n);

    printf("Sorted array is: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}