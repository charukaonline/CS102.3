#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    printf("Menu Driven Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice)
    {
        case 1:
            result = num1 + num2;
            printf("The result of addition is: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("The result of subtraction is: %.2f\n", result);
            break;
        case 3:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("The result of division is: %.2f\n", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 4:
            result = num1 * num2;
            printf("The result of multiplication is: %.2f\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
