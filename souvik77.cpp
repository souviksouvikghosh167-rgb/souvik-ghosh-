#include <stdio.h>

int main() {
    long long num;
    int sum = 0, remainder;

    printf("Enter a whole number: ");
    scanf("%lld", &num);

    // Handle negative numbers if entered, treating them as whole values
    if (num < 0) {
        num = -num;
    }

    // Process each digit
    while (num > 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("Sum of the digits = %d\n", sum);

    return 0;
}

