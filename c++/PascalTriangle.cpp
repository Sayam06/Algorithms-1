#include<iostream>
using namespace std;

int fun(int n){
	int ctr=1;

	for(int i=2;i<=n;i++){
		ctr*=i;
	}

	return ctr;
}

int main(){

	int n=0;
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<(fun(i)/fun(j)+fun(i-j));
		}
		cout<<"\n";
	}

	return 0;
}