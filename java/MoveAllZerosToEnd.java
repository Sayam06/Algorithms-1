import java.io.*; 

class PushZero { 
	static void func(int arr[], int n) { 
		int ctr = 0; 
 
		for (int i = 0; i < n; i++) 
			if (arr[i] != 0) 
				arr[ctr++] = arr[i]; 								
 
		while (ctr < n) 
			arr[ctr++] = 0; 
	} 

	public static void main (String[] args) { 
		int arr[] = {1, 2, 3, 0, 0, 0, 10, 9, 8, 0, 5, 0}; 
		int n = arr.length; 
		func(arr, n); 
		
	} 
} 
