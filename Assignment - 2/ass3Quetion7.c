//Write a program to find the position of first 1 in LSB.(least significant bit)

#include<stdio.h>
int main()
{
     int num,pos=1;   //pos= postion of bits

    printf("Enter the number : ");
    scanf("%d",&num);

    while((num&1)==0)  //num is the numbe and when it is & with 1 it and it become 0 then 
                      //the postion will be increased and when the found then it get termineted 
    {
        pos++;
        num=num>>1; //left shift like (8=1000) it become (0100)
    }

      printf("the position of lest signification bit of the number is = %d ",pos);
return 0;
}

