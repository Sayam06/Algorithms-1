#include<iostream.h>
#include <bits/stdc++.h>

int main(){
    int n = 10;

    int min = INT_MIN;
    for(int i=0;i<n;i++){
        if(min < arr[i]){
            min=arr[i];
            printf("%d",min);
        }else{
            printf("%d",min);
        }
         printf(" ");
    }
    
    return 0;
}