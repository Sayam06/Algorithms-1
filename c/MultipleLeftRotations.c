#include<stdio.h> 

void preprocess(int arr[], int n, int temp[]) { 
	for (int i = 0; i<n; i++) 
		temp[i] = temp[i + n] = arr[i]; 
} 

void rotate(int arr[], int n, int k, int temp[]) { 
	int start = k % n; 

	for (int i = start; i < start + n; i++) 
		cout<<temp[i]; 
} 

int main(){ 
	int arr[] = {1, 2, 5, 7, 8, 10, 12, 22,2001, 2002}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	int temp[2*n]; 
	preprocess(arr, n, temp); 

	int k = 3; 
	rotate(arr, n, k, temp); 

	k = 5; 
	rotate(arr, n, k, temp); 

	k = 6; 
	rotate(arr, n, k, temp); 

	return 0; 
} 
