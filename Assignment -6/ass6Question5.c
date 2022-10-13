//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,x=0,sq=0;

      printf("Enter the no of times you want to display : ");
      scanf("%d",&n);

      for(i=0;i<=n;i++)
      {
        sq=i*i*i;
        x=x+sq;
      }
      printf("sum =%d",x);
return 0;
}