//18. Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
int main()
{
   int mth;

      printf("Enter the month : ");
    scanf("%d",&mth);

    if(mth==1||mth==3||mth==5||mth==7||mth==8||mth==10||mth==12)
        printf("This month contain 31 days");

    else if(mth==2)
        printf("This month contain 28/29 days");
    
    else
        printf("This month contain 30 days");

return 0;
}