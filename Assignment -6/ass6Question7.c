//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,i;
    int count=0;

      printf("Enter the no : ");
      scanf("%d",&n);

      for(i=n;i!=0;)
      {
        i=i/10;
        ++count;
      }
      printf("%d",count);
return 0;
}