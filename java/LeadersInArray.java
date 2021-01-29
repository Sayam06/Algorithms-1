public class LeadersInArray{ 
    void Leaders(int arr[], int n) { 
        int max_right =  arr[n-1]; 
   
        System.out.print(max_right + " "); 
       
        for (int i = n-2; i >= 0; i--) { 
            if (max_right <= arr[i]) {            
                max_right = arr[i]; 
                System.out.print(max_right + " "); 
            } 
        }     
    } 
  
    public static void main(String[] args)  { 
        LeadersInArray la = new LeadersInArray(); 
        int arr[] = new int[]{21, 20, 50, 2, 18, 11 , 3, 6, 0}; 
        int n = arr.length; 
        la.Leaders(arr, n); 
    } 
} 