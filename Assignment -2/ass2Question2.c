//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int a,x;

    printf("Enter the number : ");
    scanf("%d",&a)
    
     x=a/10;
     printf("The last digit of a given number is %d",x);

return 0;
}