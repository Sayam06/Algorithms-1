class Algorithms { 
	static int ans(int arr[], int n) {  
		int sum = arr[0]; 

		for (int i=1;i<n;i++) 
			sum = sum ^ arr[i]; 
	
		return sum; 
	} 

	public static void main (String[] args) { 
		int arr[] = {1,2,4,5,2,5,4,1,8};
		System.out.println(ans(arr, arr.length)); 
	} 
} 
