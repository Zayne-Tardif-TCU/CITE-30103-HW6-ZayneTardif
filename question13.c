#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0 && n % 7 != 0)
        printf("%d meets the condition.\n", n);
    else
        printf("%d does not meet the condition.\n", n);

    return 0;
}
