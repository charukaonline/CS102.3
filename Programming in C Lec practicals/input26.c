#include <stdio.h>
int findMax (int a, int b, int c)
{
    int max;

    if (a>b && b>c)
        max=a;
    else if (b>a && a>c)
        max=b;
    else if (c>b && b>a)
        max=c;

return max;
}
int main()
{
    printf("The max number is %d \n",findMax(10,45,60));
}
