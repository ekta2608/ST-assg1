#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf ("\nBefore value swapping value of a is:%d and value of b is:%d",a,b);  
a=a+b;       //a=30 (10+20)    
b=a-b;      //b=10 (30-20)    
a=a-b;     //a=20 (30-10)    
printf("\nAfter value swapping value of a is:%d and value of b is %d",a,b);    
  
}   