//Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>
int main()
{
    int a,b

    printf("Enter the number : ");
    scanf("%d",&a);

    printf("Enter the number : ");
    scanf("%d",&b);

    if(a>b)
      printf("1st no: is the greater number is %d",a);

    else if(b>a)
      printf("2nd one is the greater number is %d",b);

    else
       printf("Both number is equal");

return 0;
}   

