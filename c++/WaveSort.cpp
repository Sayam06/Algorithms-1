#include<iostream> 
using namespace std; 

void swap(int *x, int *y) { 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 


void sort(int arr[], int n) { 
	for (int i = 0; i < n; i+=2)  { 
		if (i>0 && arr[i-1] > arr[i] ) 
			swap(&arr[i], &arr[i-1]); 

		if (i<n-1 && arr[i] < arr[i+1] ) 
			swap(&arr[i], &arr[i + 1]); 
	} 
} 

int main() { 
	int arr[] = {22,10,3,12,21,1,2002,2001}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	sort(arr, n); 
	
	for (int i=0; i<n; i++) 
	  cout<<arr[i]; 	
  
	return 0; 
} 
