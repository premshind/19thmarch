#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms, i;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Sequence: ");
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

