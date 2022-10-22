//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int n,m,i,lcm=1;

      printf("Enter the number to check : ");
      scanf("%d%d",&n,&m);
    
       for(i=1;i<=n && i<=m ;i++)             //finding the factors of the number 
       {
          if(n%i==0 && m%i==0)
                printf("\n factor of two number is=%d",i);    

            lcm=lcm*i;                          
       }
        printf("\nLCM of two number is=%d",lcm);
      
return 0;
}