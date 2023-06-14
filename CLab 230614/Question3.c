#include <stdio.h>

int main()
{
    int choice;
    float radius, result;

    printf("Menu:\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the radius: ");
    scanf("%f", &radius);

    switch (choice)
    {
        case 1:
            result = 2 * 3.14159 * radius;
            printf("The circumference of the circle is: %.2f\n", result);
            break;
        case 2:
            result = 3.14159 * radius * radius;
            printf("The area of the circle is: %.2f\n", result);
            break;
        case 3:
            result = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
            printf("The volume of the sphere is: %.2f\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
