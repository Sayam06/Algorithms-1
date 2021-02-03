#include <iostream.h>
using namespace std;
 
int largest(int arr[], int n, int k){
    
    for (int i = 0; i < n-1; i++){ 
        for (int j = 0; j < n-i-1; j++){ 
            if (arr[j] > arr[j+1]){
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            } 
        }
    }

    return arr[k-1];
}
 
int main(){
    int arr[] = {1,2002,12,6,9,30,10,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout<<largest(arr, n, k);
    return 0;
}