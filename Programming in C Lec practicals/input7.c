#include <stdio.h>
int main()
{
    int adno,marks;
    char grade;
    printf("Enter your admission number: ");
    scanf("%d",&adno);
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if (marks>=75)
    {
        grade='A';
    }
    else if (marks>=65)
    {
        grade='B';
    }
    else if (marks>=55)
    {
        grade='C';
    }
    else if (marks>=45)
    {
        grade='S';
    }
    else
        grade='F';

    printf("Admission number: %d \n",adno);
    printf("Your grade is %c \n",grade);


}
