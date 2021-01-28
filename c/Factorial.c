#include <stdio.h> 
   
int factorial(int num) { 
     if(num == 0) 
        return 1; 
    int i = num, fact = 1; 
    while (num / i != num) { 
        fact = fact * i; 
        i--; 
    } 
    return fact; 
} 
  
int main() { 
    int num = 0;
    scanf("%d",&num); 
    printf("Factorial of %d is %d", num, factorial(num)); 
    return 0; 
} 