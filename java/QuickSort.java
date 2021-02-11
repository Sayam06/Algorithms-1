public class Algorithms { 
    
	static int partition(int arr[], int l, int h)  { 
		int pivot = arr[h]; 
		int i = (l-1);
		for (int j=l; j<h; j++)  { 
			if (arr[j] < pivot)  { 
				i++; 
				int temp = arr[i]; 
				arr[i] = arr[j]; 
				arr[j] = temp; 
			} 
		} 

		int temp = arr[i+1]; 
		arr[i+1] = arr[h]; 
		arr[h] = temp; 

		return i+1; 
    } 
    
	static void sort(int arr[], int l, int h)  { 
		if (l < h)  {  
			sort(arr, l, partition(arr, l, h)-1); 
			sort(arr, partition(arr, l, h)+1, h); 
		} 
	} 

	public static void main(String args[])  { 
		int arr[] = {12,22,10,2002,1,20,7}; 
		int n = arr.length; 
		sort(arr, 0, n-1); 
		for (int i=0; i<n; ++i) 
			System.out.print(arr[i]); 
	} 
} 
