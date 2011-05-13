#include <stdio.h>

int a;
int main(int argc, const char *argv[])
{
    a += 1;
    printf("%p:%d\n", &a, a);
    while(1)
        a++;
    return 0;
}
