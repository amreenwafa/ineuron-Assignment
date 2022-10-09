//9. Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int a=1,x;
    while(a<=10)
    {
        x=(a*a*a);
        printf("%d \t",x);
        a++;
    }
return 0;
}