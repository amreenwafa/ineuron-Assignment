//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int a;

    printf("Enter the number : ");
    scanf("%d",&a);

if(a%2==0)
{
    if(a%2==0 && a%3==0)
       printf("Number is divisible by both");
    else
       printf("Number is divisible by 2");
}

else if(a%3==0)
{
 
   if(a%2==0 && a%3==0)
        printf("Number is divisible by both");
   else
         printf("Number is divisible by 3");
}

else
     printf("Number is not divisible by any");
return 0;
}   
