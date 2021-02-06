public class LeftRotate 
{ 
	static void preprocess(int arr[], int n, int temp[]) { 
		for (int i = 0; i<n; i++) 
			temp[i] = temp[i + n] = arr[i]; 
	} 

	static void rotate(int arr[], int n, int k, int temp[]) { 
		int start = k % n; 
	
		for (int i = start; i < start + n; i++) 
			System.out.print(temp[i] + " "); 
	
		System.out.print("\n"); 
	} 

	public static void main (String[] args) { 
		int arr[] = {1, 2, 5, 7, 8, 10, 12, 22,2001, 2002}; 
		int n = arr.length; 
	
		int temp[] = new int[2*n]; 
		preprocess(arr, n, temp); 
	
		int k = 2; 
		rotate(arr, n, k, temp); 
	
		k = 3; 
		rotate(arr, n, k, temp); 
	
		k = 4; 
		rotate(arr, n, k, temp); 
	} 
} 