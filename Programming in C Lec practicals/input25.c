#include <stdio.h>
int findAge()
{
    int byear,age;
    printf("Enter your birth year: ");
    scanf("%d",&byear);
    age=2023-byear;

    return age;
}
int main()
{
    printf("Your age is: %d \n",findAge());
}
