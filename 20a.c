
//pass by value 
#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping without pointers (inside func.): a=%d,b=%d \n",a,b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    swap_by_value(num1, num2);
    
    return 0;
}

