#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;

    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
        }
        print("%d",sum);        
    }

    return 0;
}