import java.util.Arrays; 
import java.util.Collections; 
  
public class Algorithms {  
    public static int smallest(Integer[] arr,int k) { 
        Arrays.sort(arr);   
        return arr[k - 1]; 
    } 
  
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        Integer arr[] = new Integer[] {10,5,7,20,13}; 
        int k = sc.nextInt(); 
        System.out.print("K'th smallest element is "+smallest(arr, k)); 
    } 
} 