#include <stdio.h>
int main()  
{  
    int a,b,sum,sub,multi,mod;    
    float div; 
      
    printf("enter two values : ");  
    scanf("%d,%d", &a, &b);  
       
    sum = a + b;  
    sub = a - b;  
    multi = a * b;  
    div = (float)a / b;  
    mod = a % b;  
  
    printf("The sum of the given numbers : %d\n", sum);  
    printf("The sub of the given numbers : %d\n", sub);  
    printf("The multiplication of the given numbers : %d\n",multi);  
    printf("The division of the given numbers : %f\n", div);  
    printf("MODULUS = %d\n", mod);  
    
} 