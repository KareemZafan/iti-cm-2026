#include <stdio.h> 

double add (double a, double b){
 return a + b; 
}

double subtract(double a , double b){
 return a - b; 
}

double divide(double a , double b){
 if(b == 0) exist(-1); 

 return a / b; 
 
}


int main(void)
{ 
  int a = 10; 
  int b = 20; 
  
  printf("Sum = %d\n", add(a,b); 
  printf("Subtraction = %d\n", subtract(a,b)); 
   printf("Division = %d\n", divide(a,b)); 
 
}
