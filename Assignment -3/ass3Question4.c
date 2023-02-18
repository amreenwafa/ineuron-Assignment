/*4. Write a program to check whether a given number is 
an even number or an odd number without using % operator.*/
#include<stdio.h>
int main()
{
    int a,x

    printf("Enter the number : ");
    scanf("%d",&a);
    
     if((a&1)==0)
         printf("Even number ");
     else
         printf("Odd number");

return 0;
}