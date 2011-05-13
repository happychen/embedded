#include <stdio.h>

void convert(int n)
{
    int i = 0;
    if((i = n/10) != 0)
        convert(i);
    putchar(n%10 + '0');
}
int main(int argc, const char *argv[])
{
    int number;
    printf("input an integer:\n");
    scanf("%d", &number);
    printf("output\n");

    if (number < 0) 
    {
        putchar('-');
        number = -number;
    }
    convert(number);
    printf("\n");
    return 0;
}
