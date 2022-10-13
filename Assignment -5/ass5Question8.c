//8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,x;
      printf("Enter the first number : ");
      scanf("%d",&i);


      for(n=1;n<=i;n++)
        printf("%d\t",x=n*n);
      
return 0;    
}