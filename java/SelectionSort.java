public class Algorithms  { 
	static void selection(int arr[],int n)  { 

		for (int i=0;i<n-1;i++)  { 
			int min = i; 
			for (int j = i+1; j < n; j++){ 
				if (arr[j] < arr[min]) 
                    min = j; 
            }

			int temp = arr[min]; 
			arr[min] = arr[i]; 
			arr[i] = temp; 
		} 
	} 

	public static void main(String args[]) 
	{  
        int arr[] = {50,12,22,10,2002,1,20,7}; 
        int n = arr.length;

        selection(arr,n); 

        for (int i=0;i<n;i++) 
			System.out.println(arr[i]+ " ");
        
	} 
} 
