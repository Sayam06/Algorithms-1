#include<iostream.h>
#include<cmath.h>

int main(){
    int n = 0;

    scanf("%d", &n);

    bool flag = true;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            printf( "Non Prime");
            flag = false;
            break;
        }
    }

    if(flag){
        printf( "Prime Number");
    }
    
    return 0;
}
   