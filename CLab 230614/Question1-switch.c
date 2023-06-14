#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num%2)
    {
        case 0:
            printf("This number is an even number");
            break;
        case 1:
            printf("This number is an odd number");
            break;
        default:
            printf("Invalid input");
            break;
    }

    return 0;
}
