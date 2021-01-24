#include<stdio.h>

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]); 
	int start=0,end=n-1,i=0;

	while (start < end){
		int temp = arr[start]; 
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	} 

	printf("Reversed array is :");
	for (i=0; i < size; i++)
		printf("%d ", arr[i]); 
	return 0;
}
