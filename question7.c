#include <stdio.h>

#define PI_DEF 3.14159     // PI using #define

int main(void)
{
    const double PI_CONST = 3.14159;   // PI using const
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    double area = PI_DEF * radius * radius;
    double circumference = 2 * PI_CONST * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}
