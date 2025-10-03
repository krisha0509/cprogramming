#include <stdio.h>

int main() {
    int n, i, number, sum = 0, mean;

    printf("How many numbers? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);
        sum += number;
    }

    mean = sum / n;

    printf("Sum = %d\n", sum);
    printf("Mean = %d\n", mean);

    return 0;
}

