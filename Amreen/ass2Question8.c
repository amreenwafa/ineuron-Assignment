//8. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main()
{
    int a;

    printf("Enter the number : ");
    scanf("%d",&a);
    
     if((a&1)==0)
         printf("Even number ");
     else
         printf("Odd number");

return 0;
}