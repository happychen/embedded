#include <stdio.h>

int foo(int n)
{
    printf("%d\n", n);
    return 0;
}
int main(int argc, const char *argv[])
{
    printf("%d\n", 100);
    printf("%d\n", 100.0);
    foo(100.0);
    
    return 0;
}
