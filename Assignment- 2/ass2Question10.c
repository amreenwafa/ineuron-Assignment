/*10. Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)*/

#include<stdio.h>
int main()
{
     int a,x,y;

    printf("Enter the number : ");
    scanf("%d",&a);

    x=a/10;
    y=x*10;

    printf("The new number is %d",y);
return 0;
}
