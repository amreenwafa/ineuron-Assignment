//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
   
    printf("Enter no of times you want to display : ");
       scanf("%d",&i);
    
    for(n=1;n<=2*i;n++)
    {
        if(n%2!=0)
          printf("%d \t",n);
    }
return 0;
}