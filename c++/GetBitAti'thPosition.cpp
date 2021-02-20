#include<bits/stdc++.h>
using namespace std;

int getb(int n,int i){
    return ((n & (1<<i)) != 0);
}
int main(){
    int n = 4,i=3;

    cout<<getb(n,i);
    return 0;
}
