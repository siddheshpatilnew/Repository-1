
#include <stdio.h>

// Function definition from your notes
void swapByReference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    swapByReference(&num1,&num2);
    printf("After swapping with pointers: x= %d, y= %d \n", num1, num2);

    return 0;
}
