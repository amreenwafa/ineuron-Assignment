//12.Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    float a,usd;

    printf("Enter the amount in INR: ");
    scanf("%f",&a);
    
     usd= a/76.23;
       printf("the amount in USD is %f",usd);
return 0;
}