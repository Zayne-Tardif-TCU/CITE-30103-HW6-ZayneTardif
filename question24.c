#include <stdio.h>

int main(void)
{
    int i;
    int count = 0;

    for (i = 1; i <= 50; i++)
    {
        if (i == 40)
            break;

        if (i % 5 == 0)
            continue;

        printf("%d\n", i);
        count++;
    }

    printf("Numbers displayed: %d\n", count);

    return 0;
}
