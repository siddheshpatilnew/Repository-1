#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, s = 0, pf = 0;
    float sq, st, cb;

    printf("Enter a number n: ");
    if (scanf("%d", &n) != 1) return 1;

    sq = (float)n * n;
    st = sqrt(n);
    cb = (float)n * n * n;

    printf("Square: %.2f\nSquare Root: %.2f\nCube: %.2f\n", sq, st, cb);

    // Logic to check if n is prime
    for (i = 1; i <= n; i++) {
        if (n % i == 0) s += i;
    }

    if (s == n + 1) printf("It is a prime number\n");
    else printf("It is not a prime number\n");

    // Logic for prime factors
    printf("Its prime factors are:\n");
    for (i = 2; i <= n; i++) { // Prime factors start from 2
        if (n % i == 0) {
            pf = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) pf += j;
            }
            if (pf == i + 1) printf("%d\n", i);
        }
    }
    return 0;
}

