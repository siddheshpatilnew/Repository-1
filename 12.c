#include <stdio.h>

int main() {
    int num1, num2, i;
    int smallest_divisor = -1;
    int a, b, temp, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Store original values for GCD
    a = num1;
    b = num2;

    // Find smallest common divisor (other than 1)
    for(i = 2; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            smallest_divisor = i;
            break;
        }
    }

    // Euclidean Algorithm for GCD
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Output
    if(smallest_divisor == -1)
        printf("No common divisor other than 1\n");
    else
        printf("Smallest Common Divisor: %d\n", smallest_divisor);

    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}