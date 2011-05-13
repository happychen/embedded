#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 0;
    unsigned int mask = 0x0f;
    char str_h[20] = "0123456789abcdef";

    int d = 0;

    puts("Please input a number:\n");
    scanf("%d", &d);
   
    j = 28;
    for (i = 0; i < 8; i++, j -=4) 
    {
       printf("%c", str_h[(d>>j)&mask]);
       
    }
    printf("\n");
    return 0;
}
