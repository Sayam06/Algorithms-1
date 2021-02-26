#include <stdio.h>
#include <stdbool.h>

boolean pallindrome(int n){
	if(n < 0)
		n=-n;
	
	if(n >= 0 && n < 10)
		return false;	

	int sum=0,rem=0,num=n;
	while(n > 0){
		rem = n%10;
		sum=(sum*10) + rem;
		n=n/10;
	}

	if(sum == num)
		return true;
	else
		return false;
}

int main() {  
	int n = 22;
	if(pallindrome(n))
		printf("Yes, it's a pallindrome");
	else	
		printf("Not a pallindrome");
	return 0; 
} 

