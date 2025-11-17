#include <stdio.h>

/*
   The problem with the original code is that (a + b) / 2 uses integer division.
   That makes it cut off the decimal, so the average becomes 7 instead of 7.5.
   Changing 2 to 2.0 makes it a float division and fixes the result.
*/

int main(void)
{
    int a = 5, b = 10;

    float avg = (a + b) / 2.0;   // do float division instead of integer division like the example.

    printf("Average = %.2f\n", avg);

    return 0;
}

