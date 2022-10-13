//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter no of times you want to display : ");
       scanf("%d",&n);
    for(i=2*n;i<=n;i+=2)
    {
        if(i%2==0)
        printf("%d \t",i); 
    }
       
     
return 0;
}