#include <stdio.h>

void selection(int arr[],int n){
    int min = 0;

    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }

        int temp = arr[min]; 
        arr[min] = arr[i]; 
        arr[i] = temp; 
    }
}
 
int main(){ 
    
    int arr[] = {50,12,22,10,2002,1,20,7};   
    int n = sizeof(arr) / sizeof(arr[0]);

    selection(arr,n);   

    for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";         

    return 0;
}
 