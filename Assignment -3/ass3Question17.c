//17. Write a program which takes the length of the sides of a triangle as an input. 
//Display whether the triangle is valid or not.

#include<stdio.h>
int main()
{
     int a,b,c;

    printf("Enter the sides of tringle : ");
    scanf("%d",&a);

    printf("\nEnter the sides of tringle : ");
    scanf("%d",&b);

    printf("\nEnter the sides of tringle : ");
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b)
       printf("Tringle is valid");

    else
       printf("Tringle is not valid");


return 0;
}   