#include <stdio.h>
#include <math.h>

// Function to calculate factorial
int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, i;
    float x, sum = 0.0;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int power = 2*i - 1;
        float term = pow(x, power) / factorial(power);

        sum = sum + sign * term;
        sign = -sign; // alternate sign
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}