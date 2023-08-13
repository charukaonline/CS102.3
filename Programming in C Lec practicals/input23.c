#include <stdio.h>
void sum (int a, int b)
{
    int total;
    total=a+b;
    printf("The total is %d \n",total);
}
int main()
{
    sum(80,70); //calling the function
    sum(5,2);
}
