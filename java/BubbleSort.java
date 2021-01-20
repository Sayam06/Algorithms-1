public class BubbleSort 
{   
    public static void main(String args[]) 
    { 
        int arr[] = {60,30,2,7,12,11,0,20}; 
        int n = arr.length;
        for (int i = 0; i < n-1; i++) 
            for (int j = 0; j < n-i-1; j++) 
                if (arr[j] > arr[j+1]){
                    // swaping by taking a temp variable
                    int temp = arr[j]; 
                    arr[j] = arr[j+1]; 
                    arr[j+1] = temp; 
                } 
        System.out.println("Sorted array is:"); 
        for (int i=0; i<arr.length; ++i) 
            System.out.println(arr[i]);  
    } 
} 