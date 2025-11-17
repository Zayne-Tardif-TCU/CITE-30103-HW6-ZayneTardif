#include <stdio.h>

int main(void)
{
    int n;
    int positives = 0, negatives = 0;
    int evens = 0, odds = 0;

    do
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        if (n != 0)
        {
            if (n > 0)
                positives++;
            else
                negatives++;

            if (n % 2 == 0)
                evens++;
            else
                odds++;
        }

    } while (n != 0);

    printf("Positives: %d\n", positives);
    printf("Negatives: %d\n", negatives);
    printf("Evens: %d\n", evens);
    printf("Odds: %d\n", odds);

    return 0;
}
