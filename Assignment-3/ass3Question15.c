//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int a;

    printf("Enter the number : ");
    scanf("%d",&a);

    if(a>1 && a!=0)
        printf("Number is positive");

    else if(a<1 && a!=0)
        printf("Number is negative");

    else
       printf("number is zero");
       
return 0;
}