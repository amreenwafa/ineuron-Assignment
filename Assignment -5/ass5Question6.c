//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
    printf("Enter no of times you want to display : ");
       scanf("%d",&n);
    for(i=1;i<=2*n;i++)
    {
        if(i%2==0)
        printf("%d \t",i); 
    }
       
     
return 0;
}