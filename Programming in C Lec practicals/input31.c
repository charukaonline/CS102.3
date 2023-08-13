#include <stdio.h>
int input()
{
    int num1,num2,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;

    return sum;
}
int main()
{
    printf("Sum is %d \n",input());
}
