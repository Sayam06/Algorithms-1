#include<bits/stdc++.h>
using namespace std;

int ans(int arr[],int n){
    int sum = arr[0];
    for(int i=0;i<n;i++){
        sum=sum^arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {1,2,4,5,2,5,4,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<ans(arr,n);
    return 0;
}
