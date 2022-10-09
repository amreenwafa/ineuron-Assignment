//12. Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
    char str;

    printf("Enter the character : ");
    scanf("%c",&str);

    printf("\nThe value is %d",str);
    
    if(str>=65&&str<=90)
     printf("\nThe given character is in upper case");

    if(str>=97&&str<=122)
     printf("\nThe given character is in lower case");
    
     
return 0;
}
