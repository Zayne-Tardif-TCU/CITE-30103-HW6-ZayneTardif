#include <stdio.h>

int globalNum = 10;   // global variable

int main(void)
{
    int localNum = 5;  // local variable

    printf("Global number: %d\n", globalNum);
    printf("Local number: %d\n", localNum);

    return 0;
}
