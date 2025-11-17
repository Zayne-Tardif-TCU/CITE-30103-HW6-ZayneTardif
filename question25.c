#include <stdio.h>

int main(void)
{
    int L, R;

    printf("Enter L and R: ");
    scanf("%d %d", &L, &R);

    for (int i = L; i <= R; i++)
    {
        printf("Table of %d\n", i);

        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");  // blank line between tables
    }

    return 0;
}
