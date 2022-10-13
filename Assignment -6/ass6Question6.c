//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int n,i,x=1;

      printf("Enter the no to calculate factorial : ");
      scanf("%d",&n);

      for(i=n;i>=1;i--)
      {
        x=x*i;
        
      }
      printf("Factorial =%d",x);
return 0;
}