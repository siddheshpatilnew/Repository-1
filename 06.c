#include <stdio.h>

// Iterative function
int factorial_iterative(int n) {
    int i, fact = 1;

    if(n < 0) {
        return -1;
    }

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// Recursive function
int factorial_recursive(int n) {
    if(n < 0)
        return -1;

    if(n == 0 || n == 1)
        return 1;

    return n * factorial_recursive(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result1 = factorial_iterative(num);
    int result2 = factorial_recursive(num);

    if(result1 == -1 || result2 == -1)
        printf("Factorial not defined for negative numbers");
    else {
        printf("Factorial (Iterative) = %d\n", result1);
        printf("Factorial (Recursive) = %d\n", result2);
    }

    return 0;
}
