#include <iostream.h> 
using namespace std; 

void swap(int* a, int* b) { 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 
int partition (int arr[], int l, int h) { 
	int pivot = arr[h]; 
	int i = (l - 1); 

	for (int j = l; j <= h - 1; j++) { 
		if (arr[j] < pivot)  { 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[h]); 
	return (i + 1); 
} 
void sort(int arr[], int l, int h)  { 
	if (l < h)  { 
		int pi = partition(arr, l, h); 
		sort(arr, l, pi - 1); 
		sort(arr, pi + 1, h); 
	} 
} 
int main()  { 
	int arr[] = {12,22,10,2002,1,20,7}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	sort(arr, 0, n - 1); 

	for (int i = 0; i < size; i++) 
		cout<<arr[i]; 

	return 0; 
} 
