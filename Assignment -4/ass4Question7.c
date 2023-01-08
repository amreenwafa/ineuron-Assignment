//7. Write a program to print the first 10 even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int a=20;
    while(a>=1)//loop for reverse 
    {
        if(a%2==0)
        printf("%d \t ",a);
        a--;
    }
return 0;
}