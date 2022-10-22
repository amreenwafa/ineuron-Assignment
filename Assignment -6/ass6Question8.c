//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int n,i,c=0;

      printf("Enter the no to check : ");
      scanf("%d",&n);
    
       for(i=1;i<=n;i++)             //finding the factors of the number 
       {
          if(n%i==0)             //count increase when reminder will be zero
          c++;                         
       }

       if(c==2)
         printf("Prime");
      else
        printf("Not Prime");
   
return 0;
}             