import java.util.*;
import java.lang.*; 
public class isPrime {
    static boolean isPrime(int x) {

        if (x == 2) { 
            return true;
        } else if (x % 2 == 0) 
            return false;
        else if (x == 1) { 
            return false;
        } 

        for (int i = 3; i <= Math.sqrt(x); i += 2) {
            if (x % i == 0) 
                return false;
        }
        return true;

    }

    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in); 
        int number = myObj.nextInt(); 
        if (isPrime(number)) {
            System.out.println("BOOM! its a prime number");
        } else {
            System.out.println("No it is not a prime number!");
        }

    }
}
