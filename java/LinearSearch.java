private class Algorithms  {
    
    public static void main(String args[]){
        int arr[] = {5,89,12,32,5,11,3}; 
        int x = 12,i=0; 
        int n = arr.length; 
        
        for (int i = 0; i < n; i++) { 
            if (arr[i] == x) 
                break;
            else
               i=-1;
        } 
        
        if (i == -1) 
            System.out.print("Element not present"); 
        else
            System.out.print("Element present at " + i); 
    } 
}
