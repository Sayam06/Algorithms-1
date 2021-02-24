#include<stdio.h>

void rev(char *str) { 
   if (*str)  { 
       rev(str+1); 
       printf("%d", *str); 
   } 
} 
  
int main() { 
   char str[] = "algorithms"; 
   rev(str); 
   return 0; 
} 
