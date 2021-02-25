#include <stdio.h>

void hanoi(int n, char src, char des, char help)  { 
	if (n == 1)  {  
		printf("Move disk 1 from rod  %d to rod %d" ,src,des); 
		return; 
	} 
	hanoi(n - 1, src, help, des); 
	printf("Move disk %d from rod %d to rod %d" ,n,src,des); 
	hanoi(n - 1, help, des, src); 
} 
int main() { 
	int n = 3;
	hanoi(n, 'A', 'C', 'B'); 
	return 0; 
} 

