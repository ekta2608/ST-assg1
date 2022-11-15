#include<stdio.h>
int main()
{
    int c1,c2;
    printf("choose your school:" );
    printf("\n 1. GPG \n 2. DPS ");
    scanf("%d",&c1);
    
    switch (c1)
    {
    case 1:
     printf("GPG");
      printf("\n choose shift \n 1. morning \n 2. evening ");
      scanf("%d",2);
      switch(c2)
      {
        case 1: 
        printf("\n morning ");
        break;
       case 2:
       printf("\n evening ");
       break;
       default:
       printf("wrong input");
      }

      break;
      case 2:

      printf("GPG");
      default:
      printf("wrong input");

    
   
    
}
}