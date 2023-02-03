//4. Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
   int a=1; 
    while(a<=20)
    {
        if(a%2!=0)
           printf("%d \t",a);
            a++;
    }
return 0;
}