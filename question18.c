#include <stdio.h>

int main(void)
{
    float a, b;
    char op;

    printf("Enter expression a math expression: ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;

        case '-':
            printf("Result: %.2f\n", a - b);
            break;

        case '*':
            printf("Result: %.2f\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: division by zero\n");
            else
                printf("Result: %.2f\n", a / b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
