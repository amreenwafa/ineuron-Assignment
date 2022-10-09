/*11. Write a program to take marks of 5 subjects from the user.
 Assume marks are given out of 100 and passing marks is 33.
 Now display whether the candidate passed the examination or failed.*/

 #include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float av;
     printf("\nEnter the marks of the subject out of 100\n");

    printf("\nEnter the marks of first subject : ");
    scanf("%d",&s1);

    printf("\nEnter the marks of second subject : ");
    scanf("%d",&s2);

   printf("\nEnter the marks of third subject : ");
    scanf("%d",&s3);

   printf("\nEnter the marks of fourth subject : ");
    scanf("%d",&s4);

   printf("\nEnter the marks of fifth subject : ");
    scanf("%d",&s5);

 

    if(s1>33 && s2>33 && s3>33 && s4>33)
      printf("Candidate passed first subject");
    else
      printf("Candidate fail the exam");

      
return 0;
}

   
 


