#include <stdio.h>
#include <inttypes.h>

int main(int argc, char* argv[])
{
    int8_t x = 127;
    printf("x = %d\n", x);
    x += 1;
    printf("Overflow, x = %d\n", x);
    x -= 1;
    printf("Underflow, x = %d\n", x);
    x *= 2;
    printf("x = %d\n", x);
    return 0;
}
