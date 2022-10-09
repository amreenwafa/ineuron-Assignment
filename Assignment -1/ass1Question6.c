//WAP to print the name of the user in double quotes.Expected output format – “Hello , Amit Kumar”

#include<stdio.h>

int main()
{
    char str[20];

    printf("Enter your name :");
    scanf("%s",&str);

    printf("\"Hello, %s\"",str);

return 0;
}


