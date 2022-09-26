//10. Write a program which takes the cost price and selling price of a product from the user.
 //Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    int cp,sp,profit,loss,p,l;

    printf("Enter the cost price : ");
    scanf("%d",&cp);

    printf("Enter the selling price : ");
    scanf("%d",&sp);

    if(sp>cp)
    {
        printf("\nYou gain profit");
        profit=sp-cp;
        p=(profit*100)/cp;
        printf("\nThe profit is%d%% ",p);
    }
    else
      {
        printf("\nYou have loss");
        loss=cp-sp;
        l=(loss*100)/cp;
        printf("\nThe loss is %d%% ",l);
      }
return 0;
}