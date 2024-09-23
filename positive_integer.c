#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Sum of even numbers: ");

    for (int i = 2; i <= num; i += 2) {
        sum += i;
        if (sum > 50) {
            goto finish;
        }
    }

finish:  // Label for goto statement

    if (sum > 50) {
        printf("Sum exceeds 50.\n");
    } else {
        printf("%d\n", sum);
    }

    printf("Program finished.\n");

    return 0;
}