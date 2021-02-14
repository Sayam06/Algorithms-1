#include <stdio.h>  

void sort(int arr[], int n) { 
	
	if (n <= 1) 
		return; 

	sort(arr,n-1); 

	int prev = arr[n-1]; 
	int j = n-2; 

	while (j >= 0 && arr[j] > prev)  { 
		arr[j+1] = arr[j]; 
		j--; 
	} 
	arr[j+1] = prev; 
} 

int main() { 
	int arr[] = {23,12,10,2002,1,9,22,2001,5}; 
	int n = 9;

	sort(arr, n); 
	
	for (int i=0; i < n; i++) 
		print("%d",arr[i]); 

	return 0; 
} 
