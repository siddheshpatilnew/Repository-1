#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    // Input
    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    // Seed initialization
    srand(time(0));

    // Generate random numbers
    printf("Pseudo Random Numbers:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", rand());
    }

    return 0;
}