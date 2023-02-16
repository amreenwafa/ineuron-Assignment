//2. Write a pro to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i,x=0;

      printf("Enter the no of times you want to display : ");
      scanf("%d",&n);

      for(i=0;i<=n;i++)
      {
        if(i%2==0)
        x=x+i;
      }
      printf("sum =%d",x);
return 0;
}