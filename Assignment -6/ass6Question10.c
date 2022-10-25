//10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
 int n,i,c;

      printf("Enter the number to check : ");
      scanf("%d",&n);

      for(i=n;i<0;i=i/10)
      {
        
        c=i%10;
      }
      printf("\n%d",c);
return 0;
}