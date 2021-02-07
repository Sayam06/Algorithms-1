#include <iostream>
using namespace std;

void answer(int arr[], int n){
	int i, j, temp;

	for (i = 0;i<n;i++){
		for (j = 0;j<n;j++){
			if (arr[j] == i) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				break;
			}
		}
	}

	for (i = 0;i<n;i++){
		if (arr[i] != i)
			arr[i] = -1;		
	}

	for (i = 0;i<n;i++) {
		cout<<arr[i];
	}
}

int main(){
	int n, arr[] = { -8, 1, 3, 7, 10, 12, 2, 2001, 2002, -666};
	n = sizeof(arr) / sizeof(arr[0]);

	answer(arr, n);
}
