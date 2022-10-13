//7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter no of times you want to display : "); 
       scanf("%d",&i);
    for(a=2*i;a>=1;)                              //a=2*i ex i=10 then a=20 the loop will check from 20
    {
        if(a%2==0)
       printf("%d \t",a);
       a--;
    }
         
return 0;
}


