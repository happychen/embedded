#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[] = "I am a student ! is!";
    char *p = str;
    char *q;
    q = p+1;
    while(*p != '\0')
    {
        while(*q != *p)    
        {
            q++;
            if(*q == '\0')break;
        }
        p++;
    }
    printf("<------------>\n");
    if (*p == *q) 
    {
        printf("%c\n", *p);
    }
    else
    {
        printf("No such match!\n");
    }
    return 0;
}
