#include <iostream> 
using namespace std; 

void sort(int arr[], int n) 
{ 
	if (n <= 1) 
		return; 

	sort( arr, n-1 ); 

	int last = arr[n-1]; 
	int j = n-2; 

	while (j >= 0 && arr[j] > last) 
	{ 
		arr[j+1] = arr[j]; 
		j--; 
	} 
	arr[j+1] = last; 
} 

int main() { 
	int arr[] = {23,12,10,2002,1,9,22,2001,5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	sort(arr, n); 
	
	for (int i=0; i < n; i++) 
		cout<<arr[i]<<" "; 

	return 0; 
} 
