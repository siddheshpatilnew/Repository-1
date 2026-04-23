#include <stdio.h>

void main()
{
int cho, a, b, c, x, y;
printf("Enter 1 for addition \n");
printf("Enter 2 for subtraction \n");
printf("Enter 3 for multiplication \n");
printf("Enter 4 for division \n");
printf("Enter 5 for power operation \n");
printf("Enter 6 for factorial \n");
scanf("%d", &cho);
if (cho == 1 || cho == 2 || cho == 3 || cho == 4)
{
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
}

switch(cho)
{
    case 1:
        c = a + b;
        break;

    case 2:
        c = a - b;
        break;

    case 3:
        c = a * b;
        break;

    case 4:
        if (b == 0)
        {
            printf("Division by zero is invalid\n");
        }
        else
        {
            c = a / b;
        }
        break;

    case 5:
        printf("Enter the base and power: ");
        scanf("%d %d", &x, &y);
        float s = 1;
        int i;
        for (i = 1; i <= y; i++)
        {
            s = y * x;
        }
        printf("%d ^ %d = %d\n", x, y, s);
        break;

    case 6:
        printf("Enter the number whose factorial you want\n");
        int n;
        scanf("%d", &n);
        int j, f = 1;

        for (j = 1; j <= n; j++)
        {
            f = f * j;
        }
        printf("Factorial of %d or %d ! = %d\n", n, n, f);
        break;

    default:
        printf("Invalid choice \n");
    }

    if (cho == 1 || cho == 2 || cho == 3 || cho == 4)
    {
        printf("Solution of the operation = %d", c);
    }
}
