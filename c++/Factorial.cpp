#include <iostream> 
using namespace std; 
  
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
    int num = 5;
    cin>>num; 
    cout<<"Factorial of "<<num<<" is "<<factorial(num); 
    return 0; 
} 