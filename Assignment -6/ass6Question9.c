//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,i,x=1,n,lcm;

      printf("Enter the two number to check : "); 
      scanf("%d%d",&a,&b);

        if(a<b)
           n=b;
        else
          n=a;

       for(i=n;i>0;)             
       {
        
          if(i%a==0 && i%b==0)
         {
            lcm=i;
            break;
         } 
         else
           i=i*(x+1);       
                                   
       }
        printf("\nLCM of two number is=%d",lcm);
      
return 0;
}