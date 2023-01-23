 //5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int n,i;
      printf("Enter no of times you want to display : ");
       scanf("%d",&i);
    for(n=2*i;n>=1;n--)
    {
       if(n%2!=0)
        printf("%d\t",n);   
    }
return 0;
}