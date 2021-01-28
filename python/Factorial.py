def factorial(num): 
    if(num == 0): 
       return 1
       
    i = num 
    fact = 1
      
    while(num / i != num): 
        fact = fact * i 
        i -= 1
          
    return fact 
  
num = 5
print("Factorial of", num, "is",factorial(num)) 
   