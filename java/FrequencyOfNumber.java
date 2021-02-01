
  
public class Algorithms { 
      
    static int frequency(int a[],int n, int x){ 
        int count = 0; 
        for (int i=0; i < n; i++) 
        if (a[i] == x)  
            count++; 
        return count; 
    } 
      
    public static void main (String[] args) { 
          
        int a[] = {2002,1,12,12,12,22,1,2001,10}; 
        int x = 2002; 
        int n = a.length; 
          
        System.out.println(frequency(a, n, x)); 
    } 
} 