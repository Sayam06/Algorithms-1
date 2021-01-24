package first;

import java.util.Scanner;

public class LinearSearch {

	public static void main(String[] args) {
		
		        int arr[] = {5,89,12,32,5,11,3}; 
		        int x = 12,i=0,ctr=0; 
		        int n = arr.length; 
		        
		        for(i=0;i<arr.length;i++) {
		        	if(arr[i] == x) {
		        		System.out.println("Element Found At "+i);
		        		return;
		        	}else {
		        		ctr=-1;
		        	}
		        }
		        
		        if(ctr == -1)
		        	System.out.println("Element Not Found");
		}
		
	

}
