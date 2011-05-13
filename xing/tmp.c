#include <stdio.h>

void foo(voi)
{
    int num = 10;
    int i;
    for (i = 0; i < num; i++) 
    {
        printf("%d\n",i);
    }
}

int main(int argc, const char *argv[])
{
    char *str = "hello, world";
    foo();
    *str = 'a';
    printf("%s\n", str);
    return 0;
}
