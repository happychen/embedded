#include <stdio.h>
#include "para_callback.h"

void say_hello(void *str)
{
    printf("Hello %s\n", (const char *)str);
}
void count_numbers(void *num)
{
    int i;
    for (i = 0; i < (int)num; i++) 
    {
        printf("%d", i);
    }
    putchar('\n');
}
int main(int argc, const char *argv[])
{
    repeat_three_times(say_hello,(void *)"Guys");
    repeat_three_times(count_numbers, (void *)4);
    return 0;
}
