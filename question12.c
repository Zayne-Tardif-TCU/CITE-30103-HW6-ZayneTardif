#include <stdio.h>

int main(void)
{
    int a = 5, b = 3, res;

    // fix 1: parentheses
    res = (a + b) << 1;
    printf("Fix 1 (parentheses): %d\n", res);

    // fix 2: arithmetic instead of shifting
    res = (a + b) * 2;
    printf("Fix 2 (arithmetic): %d\n", res);

    return 0;
}
