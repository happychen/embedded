#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char str[] = "hello world one two three!";
    char array[4096];
    char *p = str;
    char *q = array;
    while(*p != '\0')
    {
        if(*p == ' ')
            *p = '\n';
        else
        *q++ = *p++;
    }
    *q = '\0';
//    strcpy(str, array);
    printf("array:%s\n", array);
    return 0;
}
