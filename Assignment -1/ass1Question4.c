/*WAP to find the area of the circle. 
Take radius of circle from user as input and print the result in below given format
Expected output format – “Area of circle is A having the radius R”. 
Replace A with area & R with radius*/

#include<stdio.h>
int main()
{
    float A,R;
    printf("Enter the value of radius\n");
    scanf("%f",&R);
    
    A=(22/7)*R*R;
    printf("\nArea of circle is %f having the radius %f",A,R);

    return 0;
}