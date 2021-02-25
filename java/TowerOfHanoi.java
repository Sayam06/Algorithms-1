import java.util.*;
import java.io.*;
import java.math.*;
class Algorithms
{
static void hanoi(int n, char src,
					char des, char help) 
{ 
	if (n == 1) 
	{ 
		System.out.println("Move disk 1 from rod "+ 
						src+" to rod "+des); 
		return; 
	} 
	hanoi(n - 1, src, help, des); 
	System.out.println("Move disk "+ n + " from rod " + 
					src +" to rod " + des ); 
	hanoi(n - 1, help, des, src); 
} 

public static void main(String args[]) { 
	int n = 4; 
	hanoi(n, 'A', 'C', 'B'); 
} 
}

