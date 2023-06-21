#include <stdio.h>

int main() {
    int marks[10];
    int i = 0, total = 0;
    float average;

    printf("Enter 10 marks:\n");
    while (i < 10) {
        printf("Mark %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
        i++;
    }

    average = (float)total / 10.0;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average < 50.0) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }

    return 0;
}
