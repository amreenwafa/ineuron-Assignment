//10. Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i,n,x;
      printf("Enter the first number : ");
      scanf("%d",&i);

      for(n=1;n<=10;n++)
        printf("%d\t",x=i*n);
      
return 0;    
}