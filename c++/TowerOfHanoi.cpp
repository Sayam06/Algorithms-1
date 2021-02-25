#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char src, char des, char help)  { 
	if (n == 1)  { 
		cout << "Move disk 1 from rod " << src <<  " to rod " << des<<endl; 
		return; 
	} 
	hanoi(n - 1, src, help, des); 
	cout << "Move disk " << n << " from rod " << src << " to rod " << des << endl; 
	hanoi(n - 1, help, des, src); 
} 
int main() { 
	int n = 3;
	hanoi(n, 'A', 'C', 'B'); 
	return 0; 
} 

