#include <stdio.h>

int main()
{
    int no, counter, odd=0, even=0;

    for (counter=1; counter<=10; counter++)
    {
        printf("Enter %d number: ",counter);
        scanf("%d",&no);

        if (no%2==0)
            even++;
        else
            odd++;
    }

    printf("There are %d even numbers.\n", even);
    printf("There are %d odd numbers.\n", odd);

}
