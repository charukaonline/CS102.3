#include <stdio.h>

int main() {
    int number, originalNumber, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits of %d is: %d\n", originalNumber, sum);

    return 0;
}
