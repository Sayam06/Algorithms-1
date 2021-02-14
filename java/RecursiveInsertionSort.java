import java.util.Arrays; 

public class Algorithms  { 
	static void sort(int arr[], int n)  { 
		if (n <= 1) 
			return; 
	
		sort(arr, n-1); 
	 
		int prev = arr[n-1]; 
		int j = n-2; 
	
		while (j >= 0 && arr[j] > prev) { 
			arr[j+1] = arr[j]; 
			j--; 
		} 
		
		arr[j+1] = prev; 
	} 
	
	public static void main(String[] args) { 
		int arr[] = {23,12,10,2002,1,9,22,2001,5}; 
	
		sort(arr, arr.length); 

		for(int i=0;i<arr.length;i++)		
			System.out.println(arr[i]); 
	} 
} 
