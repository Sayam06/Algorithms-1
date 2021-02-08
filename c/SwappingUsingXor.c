#include<stdio.h>

int main(){

    int a = 12, b = 2002;

    
    
    //Swaping
    a ^= b;
    b ^= a;
    a ^= b;

    printf("After Swapping %d , %d",a,b);

    return 0;

}