public class Algorithms { 
	static void sort(int arr[])  { 
		int n = arr.length; 

		for (int i=1;i<n;i++) { 
			int key = arr[i]; 
			int j = i-1; 

			while (j >= 0 && arr[j] > key) { 
				arr[j + 1] = arr[j]; 
				j--;
			} 
			arr[j + 1] = key; 
		} 
	} 
	public static void main(String args[])  { 
		int arr[] = {2001, 12, 1, 2002, 22, 2001, 10};  

		sort(arr); 

		for (int i=0;i<n;i++) 
			System.out.print(arr[i]+" "); 
		 
	} 
} 
