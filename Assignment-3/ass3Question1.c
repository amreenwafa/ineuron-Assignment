/*//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int a;

    printf("Enter the number : ");
    scanf("%d",&a);

    if(a>0)
     printf("\n Number is positive");
    else
     printf("\n Number is non-positive");
return 0;
}*/



#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter Year : ");
   scanf("%d", &x);

   if(x%4==0)
    {
        if(x%100==0)
        {
            if(x%400==0)
             printf("\n%d is  Leap Year!!\n", x);
            else
             printf("\n%d is Not a Leap Year!!\n", x);            
        }
        else
          printf("\n%d is a Leap Year!!\n", x);            
          
    }
    else
      printf("\n%d is Not a Leap Year!!\n", x);            
       
           

   return 0;
}


   