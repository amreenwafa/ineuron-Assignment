//Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int no,a,b,x,y,sum=0;

    printf("Enter the three digit number : ");
    scanf("%d",&no);

    x=no%10;
    a=no/10;
    y=a%10;
    b=a/10;

    sum= x+y+b;
    printf("Sum of the digit are %d",sum);

return 0;
}