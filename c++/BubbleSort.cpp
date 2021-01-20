#include <iostream>
using namespace std; 

int main()  
{  
    int arr[] = {14,1,13,7,50,12,60};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    int i=0, j=0;  
    for (i = 0; i < n-1; i++){  
        for (j = 0; j < n-i-1; j++)  
            if (arr[j] > arr[j+1])  
                int temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp; 
    }
    i=0;
    cout<<"Sorted array is: \n";  
    for (i=0;i<n;i++)  
        cout<<arr[i]<<endl;  
    return 0;  
}  