#include <stdio.h>

int main() {
    int monthNumber;

    // Prompt the user to enter the month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Check if the month number is valid
    if (monthNumber >= 1 && monthNumber <= 12) {
        // Use a switch statement to determine the month name
        switch (monthNumber) {
            case 1:
                printf("January\n");
                break;
            case 2:
                printf("February\n");
                break;
            case 3:
                printf("March\n");
                break;
            case 4:
                printf("April\n");
                break;
            case 5:
                printf("May\n");
                break;
            case 6:
                printf("June\n");
                break;
            case 7:
                printf("July\n");
                break;
            case 8:
                printf("August\n");
                break;
            case 9:
                printf("September\n");
                break;
            case 10:
                printf("October\n");
                break;
            case 11:
                printf("November\n");
                break;
            case 12:
                printf("December\n");
                break;
        }
    } else {
        printf("Invalid month number\n");
    }

    return 0;
}
