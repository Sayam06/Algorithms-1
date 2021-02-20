#include<stdio.h>

int getb(int n,int i){
    return ((n & (1<<i)) != 0);
}
int main(){
    int n=5,i=2;
    printf("%d",getb(n,i));
    return 0;
}
