public class Algorithms { 
      
    static int find(int a[],int n, int x){ 
        int ctr = 0; 
        for (int i=0; i < n; i++) 
        if (a[i] == x)  
            ctr++; 
        return ctr; 
    } 
      
    public static void main (String[] args) { 
          
        int arr[] = {2002,1,12,12,12,22,1,2001,10}; 
        int x = 2002; 
        int n = a.length; 
          
        System.out.println(find(arr, n, x)); 
    } 
} 