//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b

    printf("Enter the number : ");
    scanf("%d",&a);

    printf("Enter the number : ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d %d number after swaping",a,b);

return 0;
}   