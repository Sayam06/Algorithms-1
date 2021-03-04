import java.io.*;

class Algorithms{

static int jos(int n, int k){
	if (n == 1)
	   return 1;

	return (jos(n - 1, k) + k-1) % n + 1;


public static void main(String[] args){
	System.out.println(jos(6, 2));
    }
}

