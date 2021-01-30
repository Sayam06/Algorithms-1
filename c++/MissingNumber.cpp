#include <iostream>
using namespace std;

void sort(int arr[], int n) { 
	int i=0, j=0;  
    for (i = 0; i < n-1; i++){  
        for (j = 0; j < n-i-1; j++){  
            if (arr[j] > arr[j+1]){ 
                int temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp; 
            }
        }
    }
} 
 
int missing(int a[], int n) { 
    int i, sum=1; 
     
    for (i=2;i<=(n+1);i++){
        sum+=i;
        sum -= a[i-2];
    }
    return sum; 
} 


 
int main() {
    int arr[] = {1, 2, 3, 4, 5 ,7};
    sort(arr,n);
    cout<<missing(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
 