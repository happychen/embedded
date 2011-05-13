#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("\\t\taaa\bbbb\n");
    printf("int:%d,0x%x,double:%f\n", 7, 100, 27.0);
    printf("17.2365:%f\n", 17.2365);
    printf("%%d,',\''\n");
    printf("sizeof(int)=%d\n", sizeof(int));
    printf("sizeof(short)=%d\n", sizeof(short));
    printf("sizeof(long)=%d\n", sizeof(long));
    printf("sizeof(char)=%d\n", sizeof(char));
    printf("sizeof(float)=%d\n", sizeof(float));
    printf("sizeof(double)=%d\n", sizeof(double));
    return 0;
}
