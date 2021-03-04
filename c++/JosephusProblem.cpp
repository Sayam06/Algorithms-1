#include <bits/stdc++.h>
using namespace std;

int r(int a, int b){
	if(a == 1)
		return a;

	return (r(a-1,b)+b-1)%a+1;
}


int main() {  
	int a = 5,b=3;
	cout<<r(a,b,7);
	return 0; 
} 

