#include<stdio.h>

int fun(int n){
	int ctr=1;

	for(int i=2;i<=n;i++){
		ctr*=i;
	}

	return ctr;
}

int main(){

	int n=0;
	scanf(n);

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			int res = fun(i)/fun(j)+fun(i-j);
			printf("%d",&res);
		}
	}

	//return 0;
}