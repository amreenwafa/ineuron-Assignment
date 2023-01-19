//
#include<stdio.h>
int main()
{
    int n=1,i;
    printf("Enter no of times you want to display : ");
       scanf("%d",&i);
    do
    {
        printf("%d \t",n); 
        n++; 
    }while(n<=i);
     
return 0;
}