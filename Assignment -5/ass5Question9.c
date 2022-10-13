//9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,x;
      printf("Enter the first number : ");
      scanf("%d",&i);


      for(n=1;n<=i;n++)
        printf("%d\t",x=n*n*n);
      
return 0;    
}