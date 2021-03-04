#include <bits/stdc++.h>
using namespace std;

int jos(int a, int b){
	if(a == 1)
		return a;

	return (jos(a-1,b)+b-1)%a+1;
}


int main() {  
	int a = 7,b=2;
	cout<<jos(a,b);
	return 0; 
} 

