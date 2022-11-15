
#include<stdio.h>
float main()
{
float p,r,t,s;
printf("enter principle:");
scanf("%f",&p);
printf("\nenter rate:");
scanf("%f",&r);
printf("\nenter time:");
scanf("%f",&t);
s=p*r*t/100;
printf("\nsimple interest=%f", s);

}