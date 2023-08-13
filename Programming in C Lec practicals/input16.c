#include <stdio.h>
int main ()
{
    int no, counter=1, odd=0, even=0;
    do
    {
        printf("Enter %d number: ",counter);
        scanf("%d", &no);

            if (no%2==0)
                even++;
            else
                odd++;

        counter++;


    }
    while (counter<=10);

    printf("There are %d even numbers.\n",even);
    printf("There are %d odd numbers.\n",odd);
}

