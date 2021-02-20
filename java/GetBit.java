import java.io.*;

class Algorithms {
	static void getb(long n, long i){
  		
		System.out.print(((n & (1 << (i - 1))) >> (i - 1)));
	}

	public static void main(String[] args) {
		long n = 4, i = 2;
	
		getb(n, i);
	}
}

