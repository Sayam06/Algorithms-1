import java.io.*;

class Algorithms{

static int jos(int n, int k)
{
if (n == 1)
	return 1;

	return (jos(n - 1, k) + k-1) % n + 1;


public static void main(String[] args)
{
int n = 6;
int k = 2;
System.out.println(jos(n, k));
}
}

