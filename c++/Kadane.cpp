#include<bits/stdc++.h>
using namespace std; 

int kadane(int *a,int n){
        int sum=0,best=0;
        for(int i=0;i<n;i++){
                sum=max(a[i],a[i]+sum);
                best=max(best,sum);
        }
        return best;
}

signed main(){ 
        int a[]={-2,-3, 4, -1, -2, 1, 5, -3};
        int n = sizeof(a)/sizeof(a[0]); 
        cout<<kadane(a,n); 
        return 0;
}
