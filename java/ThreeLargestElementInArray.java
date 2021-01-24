public class ThreeLargestElementInArray {

	public static void main(String[] args) {
		int arr[] = {30,-1,4,8,20,1,0}; 
		int n = arr.length;  
    int i, first, second, third; 

		if (n < 3) { 
			  System.out.print("Array Size Less Than 3"); 
		}else{
        third = first = second = Integer.MIN_VALUE; 
        
		    for (i=0;i<n;i++) {
			      if (arr[i] > first) { 
				  	    third = second; 
				        second = first; 
				        first = arr[i]; 
			      } else if (arr[i] > second) { 
				        third = second; 
				        second = arr[i]; 
			      } else if (arr[i] > third) 
				        third = arr[i]; 
		        }        
		    System.out.println("Three largest elements are " + first +" "+ second +" "+ third); 
    }	
	} 
} 
