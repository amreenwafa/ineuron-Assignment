//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,x=0;

      printf("Enter the no of times you want to display : ");
      scanf("%d",&n);

      for(i=0;i<=n;i++)//Loop for natural number
      {
        x=x+i;
      }
      printf("sum =%d",x);
return 0;
}