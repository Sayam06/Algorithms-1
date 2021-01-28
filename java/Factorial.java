public class Algorithms {  
    static int factorial(int num) { 
        if(num == 0) 
           return 1; 
        int i = num, fact = 1; 
        while (num / i != num) { 
            fact = fact * i; 
            i--; 
        } 
        return fact; 
    } 
  
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println("Factorial of "+num+" is "+factorial(num)); 
    } 
} 