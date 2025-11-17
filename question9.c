#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 2;

    // integer division
    int intResult = a / b;

    // implicit casting (one side is a float)
    float implicitResult = a / 2.0;

    // explicit casting (force one operand to float)
    float explicitResult = (float)a / b;

    printf("Integer division: %d\n", intResult);
    printf("Implicit cast result: %.2f\n", implicitResult);
    printf("Explicit cast result: %.2f\n", explicitResult);

    return 0;
}
