#include <stdio.h>

int main(void)
{
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("Sum from 1 to %d = %d\n", n, sum);

    return 0;
}
