//3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n,i=1
    printf("Enter no of times you want to display : ");
       scanf("%d",&n);
    do
    {
        printf("%d \t",n); 
        n--; 
    }while(n>=i);
     
return 0;
}