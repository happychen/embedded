#include <stdio.h>

int main(int argc, const char *argv[])
{
    double d1 = 12.0, d2 = 12.0;
    printf("%f\n", (1.0E20 - 1.0E20) + 3.14);
    printf("%f\n", 1.0E20 - (1.0E20 + 3.14));
    if(d1 == d2)
        printf("hello\n");
    return 0;
}
