#include <stdio.h>

/*
   The problem in the original code is that scanf needs the & symbol
   so it knows where to store the values. Without it, the program
   doesn’t read the input correctly.
*/

int main(void)
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);   // added & to fix the bug

    printf("You entered: %d and %d\n", x, y);

    return 0;
}
