/*对个16位的二进制数取出它的奇数位
 * */
#include <stdio.h>

unsigned short getbits(unsigned short value)
{
    int i = 0;
    int j = 0;
    unsigned short int  z, a, q;
    z = 0;
    for (i = 1; i <= 15; i += 2) 
    {
        q = 1;
        for (j = 1; j <= (16-i-1)/2; j++) 
            q = q * 2;
        a = value >> (16-i);
        a = a << 15;
        a = a > 15;
        z = z + a * q;
    }
    return (z);
}
int main(int argc, const char *argv[])
{
    unsigned short getbits (unsigned short);
    unsigned short int a;
    printf("\ninput an octal number:\n");
    scanf("%o", &a);
    printf("result: %o\n", getbits(a));
    return 0;
}
