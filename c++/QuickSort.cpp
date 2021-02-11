#include <iostream.h> 
using namespace std; 

int partition (int arr[], int l, int h) { 
	int pivot = arr[h]; 
	int i = (l - 1); 

	for (int j = l; j <= h - 1; j++) { 
		if (arr[j] < pivot)  { 
			i++; 
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];
		} 
	}  
    
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
            
	return (i + 1); 
} 

void sort(int arr[], int l, int h)  { 
	if (l < h)  { 
		sort(arr, l, partition(arr, l, h) - 1); 
		sort(arr, partition(arr, l, h) + 1, h); 
	} 
} 

int main()  { 
	int arr[] = {12,22,10,2002,1,20,7}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	sort(arr, 0, n - 1); 

	for (int i = 0;i<size;i++) 
		cout<<arr[i]; 

	return 0; 
} 
