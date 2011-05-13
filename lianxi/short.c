/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = (short *)(a+2);
    int i = *p;
    printf("%x\n", i);
    
    return 0;
}
*/
/*    int a = 1, b;
    for (b = 1; b <= 10; b++) 
    {
        if(a >= 8) break;
        if(a%2 == 1)
        {
            a += 5;
            continue;
        }
        a -= 3;
    }
    printf("%d\n", b);
    return 0;
*/
/*    int a ;
    int *p;
    p = &a;
//    *p = 0x500;
    a = (int)(*(&p));
    if(a == (int)p)
        printf("equal!\n");
    else
        printf("No equal!\n");
    a = (int)(&(*p));
    if(a == (int)p)
        printf("equal!\n");
    else
        printf("No equal!\n");
    return 0;
*/
/*    struct st_1
    {
        char errstr[32];
        int status;
        short * pdata;
    };
    struct st_1 st[16];
    char *p = (char *)(st[2].errstr + 32);
    printf("%d\n", (p - (char *)(st)));
    return 0;
*/

/*    #include <stdio.h>
    struct A
    {
    short i;
    short j;
    char *ptr;
    long array[100];
    char b[4];
    char *c;
    };
    #define PRINT_ME ((char *)&((struct A *)0)->c)
    
    int main(int argc, const char *argv[])
    {
        printf("%d\n", PRINT_ME);
        return 0;
    }
*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int arr[] = {6, 7, 8, 9, 10};
    int *ptr = arr;
    *(ptr++) += 123;
    printf("%d,%d\n", *(++ptr), *(ptr));
    return 0;
}

/*
#include <stdio.h>

void fun(int *a, int b[])
{
    b[0] = *a + 6;
}
int main(int argc, const char *argv[])
{
    int a, b[5] = {0};
    a = 0;
    b[0] = 3;
    fun(&a, b);
    printf("%d\n", b[0]);
    return 0;
}
*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
    unsigned short a = 65535;
    unsigned short b = 10;
    unsigned short c = a + b;
    printf("%u\n", c);
    return 0;
}
*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
    
     const char *p = "12345";
     const char **q = &p;
    *q = "abcde";
     const char *s = ++p;
    printf("%c\n", *s);
    p = "XYZWVU";
    printf("%c\n", *++s);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#define PINT char*
typedef char* pint;
int main(int argc, const char *argv[])
{
    PINT a1,b1;
    pint a2,b2;
    printf("%d\n", sizeof(a1));
    printf("%d\n", sizeof(b1));
    printf("%d\n", sizeof(a2));
    printf("%d\n", sizeof(b2));
    return 0;
}
*/
