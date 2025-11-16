/* ===== Documentation Section =====
   Program: Rectangle Area & Perimeter
   Author: Zayne Tardif
   Description:
   * This program reads width and height that someone inputs.
   * Then calculates the rectangle's area and perimeter
*/

#include <stdio.h>   // include standard input/output functions so do this for most codes.

// Definitions (variables/constants or program setup)
int main(void)
{
    double width, height;
    double area, perimeter;

    // ask the user for inputs and then register their input.
    printf("Enter rectangle width: ");
    scanf("%lf", &width);

    printf("Enter rectangle height: ");
    scanf("%lf", &height);

    // do the math
    area = width * height;
    perimeter = 2 * (width + height);

    // show the results of said math.
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
