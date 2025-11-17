#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    do
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        if (n != 0)
            count++;

    } while (n != 0);

    printf("You entered %d numbers.\n", count);

    return 0;
}
