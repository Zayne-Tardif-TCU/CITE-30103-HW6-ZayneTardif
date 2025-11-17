#include <stdio.h>

int main(void)
{
    int n, original, rev = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    original = n;  // store original value

    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", rev);

    return 0;
}
