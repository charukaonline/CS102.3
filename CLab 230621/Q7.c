#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, next, count;

    printf("First 10 numbers of the Fibonacci sequence:\n");

    printf("%d\n%d\n", num1, num2);

    for (count = 3; count <= 10; count++) {
        next = num1 + num2;
        printf("%d\n", next);
        num1 = num2;
        num2 = next;
    }

    return 0;
}
