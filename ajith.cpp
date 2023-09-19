#include<stdio.h>
#include<conio.h> 
int main ()
{ 
     int a,b,c,d;
     int sum,sub,mul,rem;
     float div;
     
     printf("Enter the value of b,c,d:");
     scanf("%d%d%d",&b,&c,&d);
     sum=b+c;
     sub=b-c;
     mul=b*c;
     div=b/c;
     rem=b%d;
     a=b/c*d;
     printf("\nsum=%d,sub=%d,mul=%d,div=%f",sum,sub,mul,div);
     printf("\n reminder of division of b&d is%d",rem);
     printf("\na=%d",a);return 0;
} 
