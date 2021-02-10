#include <iostream.h>
using namespace std;

int median(int arr1[], int arr2[], int n){
	int i = 0; 
	int j = 0; 
	int ctr;
	int m1 = -1, m2 = -1;

	for (ctr = 0; ctr <= n; ctr++) {
		if (i == n) {
			m1 = m2;
			m2 = arr2[0];
			break;
		}
		else if (j == n) {
			m1 = m2;
			m2 = arr1[0];
			break;
		}
		if (arr1[i] <= arr2[j]) {
			m1 = m2; 
			m2 = arr1[i];
			i++;
		}
		else {
			m1 = m2; 
			m2 = arr2[j];
			j++;
		}
	}

	return (m1 + m2)/2;
}

int main(){
	int arr1[] = {1, 10, 12, 22, 2001, 2002};
	int arr2[] = {2, 5, 17, 19, 27, 300};

	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	if (n1 == n2)
		cout<<median(arr1, arr2, n1) ;
	else
		cout<<"Unequal size of Array";
        
	return 0;
}
