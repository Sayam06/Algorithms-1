public class Algorithms {    
    public static void main(String[] args) { 
        int a = 2002, b = 2001;
        

        //Swapping 
        a^=b;
        b^=a;
        a^=b;

        System.out.println("After Swapping : " +a+","+b); 

    } 
} 