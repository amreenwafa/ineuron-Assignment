//16. Write a program to check whether a given character is an alphabet (uppercase),
// an alphabet (lower case), a digit or a special character.

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

    if(str>=33&&str<47)
     printf("\nThe given character is in special character");

    if(str>=48&&str<=57)
     printf("\nThe given character is in digit");

           
return 0;
}
