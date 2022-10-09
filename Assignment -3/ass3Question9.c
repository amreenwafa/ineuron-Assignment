//9. Write a program to find the greatest among three given numbers.
// Print number once if the greatest number appears two or three times.

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the number : ");
    scanf("%d",&a);

    printf("Enter the number : ");
    scanf("%d",&b);

    printf("Enter the number : ");
    scanf("%d",&c);

    if(a>=b&&a>=c)
     printf("first number is the greater one ");

    else if(b>=a&&b>=c)
     printf("Second number is the greater one ");

    else
     printf("Third number is the greater one ");
return 0;
}