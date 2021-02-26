public class Algorithms {
static bool p(int n){
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
  public static void main(String[] args) {
    int n = 2002;
	
	if(p(n))
		System.out.println("Yes, it's a pallindrome");
	else	
		System.out.println("Not a pallindrome");
  }
}
