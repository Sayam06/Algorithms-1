#include <iostream> 
using namespace std; 

void func(int arr[], int n) { 
	int ctr = 0; 

	for (int i = 0; i < n; i++) 
		if (arr[i] != 0) 
			arr[ctr++] = arr[i];								

	while (ctr < n) 
		arr[ctr++] = 0; 
} 

int main() { 
	int arr[] = {1, 2, 3, 0, 0, 0, 10, 9, 8, 0, 5, 0}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	func(arr, n); 

	for (int i = 0; i < n; i++) 
		cout<<arr[i]; 

	return 0; 
} 
