#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 0;
    char str_h[20] = "0123456789abcdef";

    int d = 0;

    puts("Please input a number:\n");
    scanf("%d", &d);
   
    j = sizeof(int)*8 - 4;
    for (i = 0; i < sizeof(int)*2; i++, j -=4) 
    {
       printf("%c", str_h[(d>>j)&0x0f]);
       
    }
    printf("\n");
    return 0;
}
