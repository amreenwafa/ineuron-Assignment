//Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    

    printf("Enter the number : ");
    scanf("%d",&a);

    printf("Enter the number : ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("%d %d number after swaping",a,b);

return 0;
}   