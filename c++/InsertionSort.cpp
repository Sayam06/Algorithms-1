#include <iostream.h> 
using namespace std; 

void sort(int arr[], int n) { 	

	for (int i = 1; i < n; i++)  { 
		int key = arr[i];  
		int j = i - 1; 

		while (j >= 0 && arr[j] > key)  { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

int main() { 
	int arr[] = { 20 ,2001, 12, 1, 2002, 22, 2001, 10}; 

	int n = sizeof(arr) / sizeof(arr[0]); 

	sort(arr, n); 

	for(int i =0;i<n;i++) 
		cout<<arr[i]<<" "; 

	return 0; 
} 
