//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n=1;
    printf("Enter no of times you want to display : ");
       scanf("%d",&i);
    do
    {
        if(n%2!=0)
          printf("%d \t",n);
        else
          n++;
    }while(n<=i);
return 0;
}