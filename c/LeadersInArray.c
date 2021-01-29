#include<stdio.h>

void Leaders(int arr[], int n){
    int max =  arr[n-1];
    int i;
 
    printf("%d ", max);
      
    for(i = n-2; i >= 0; i--){
        if(max < arr[i]){
           printf("%d ", arr[i]);
           max = arr[i];
        }
    }   
}
 
int main(){
  int arr[] = {21, 20, 50, 2, 18, 11 , 3, 6, 0};
  Leaders(arr, 9);
  return 0; 
}  
