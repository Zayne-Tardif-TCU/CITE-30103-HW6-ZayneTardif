#include <stdio.h>

int main(void)
{
// each variable type.
    char c;
    int i;
    long int li;
    float f;
    double d;
// makes it print the bytes and other info.
    printf("Size of char variable: %zu bytes\n", sizeof(c));
    printf("Size of int variable: %zu bytes\n", sizeof(i));
    printf("Size of long int variable: %zu bytes\n", sizeof(li));
    printf("Size of float variable: %zu bytes\n", sizeof(f));
    printf("Size of double variable: %zu bytes\n", sizeof(d));

    return 0;
}
