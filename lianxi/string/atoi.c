#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int number = 12345;
    char string[25];
    itoa(number, string, 10);
    printf("integer = %d string = %s\n", number, string);
    return 0;
}
