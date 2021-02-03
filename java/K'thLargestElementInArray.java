import java.util.Arrays; 
import java.util.Collections; 

public class Algorithms { 
	public static int largest(Integer[] arr, int k) { 
		Arrays.sort(arr,Collections.reverseOrder()); 
		return arr[k - 1]; 
	} 
	public static void main(String[] args) { 
		Integer arr[] = new Integer[] { 1,2002,12,6,9,30,10,30 }; 
		int k = 3; 
		System.out.print(largest(arr, k)); 
	} 
} 

