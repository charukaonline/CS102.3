#include <stdio.h>
int main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d",&no);

    if (no>0)
    {
        printf("The entered number is positive.\n");
    }
    else if (no<0)
    {
        printf("The entered number is negative.\n");
    }
    else
    {
        printf("The entered number is zero.\n");
    }


}
