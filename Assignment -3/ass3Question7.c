/*7. Write a program to check whether roots of a given quadratic equation 
are real & distinct, real & equal or imaginary roots*/
 
#include<stdio.h>
int main()
{
     
    int a,b,c,x;
    printf("Enter the the number in a,b,and c in the form of \"a(x*x)+bx+c\"");

    printf("\n Enter the value of a = ");
     scanf("%d",&a);

    printf("\n Enter the value of b = ");
     scanf("%d",&b);

    printf("\n Enter the value of c = ");
     scanf("%d",&c);


  x= (b*b)-4*(a*c)

  if(x>0)
     printf("\n Real and distinct roots");
  else if(x==0)
      printf("\n Real and equal roots");
  else
       printf("\n Equation is imaginary roots");
return 0;
}

