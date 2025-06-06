#include <stdio.h>

int main()
{

    int a, b;

    printf("%s", "Enter two integers: ");
    scanf("%d %d", &a, &b);

    puts("");
    printf("You entered: %d and %d\n", a, b);
    printf("Sum: %d\n", a + b);
    printf("Product: %d\n", a * b);
    puts("");

    if (a == b)
    {

        printf("The numbers are equal.\n");
        printf("Difference of %d and %d is: 0\n", a, b);
        printf("Quotient of %d and %d is: 1\n", a, b);
        printf("Remainder of %d and %d is: 0\n", a, b);
    }
    else if (a < b)
    {

        printf("Difference of %d and %d is: %d\n", b, a, b - a);
        printf("Quotient of %d and %d is: %d\n", b, a, b / a);
        printf("Remainder of %d and %d is: %d\n", b, a, b % a);
    }
    else if (a > b)
    {

        printf("Difference of %d and &d is: %d\n", a - b);
        printf("Quotient of %d and %d is: %d\n", a, b, a / b);
        printf("Remainder of %d and %d is: %d\n", a, b, a % b);
    }
    else
    {

        printf("Difference of %d and %d is: %d\n", b, a, b - a);
        printf("Quotient of %d and %d is: %d\n", b, a, b - a);
        printf("Remainder of %d and %d is: %d\n", b, a, b - a);
    }
}