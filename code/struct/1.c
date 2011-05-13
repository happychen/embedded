#include <stdio.h>
#pragma pack(16)
typedef struct
{
    char d;
    int b;
    short c[7];
}node;

int main(int argc, const char *argv[])
{
    node a;
    printf("%d\n",sizeof(a));
    return 0;
}
