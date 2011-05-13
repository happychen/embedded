#include <stdio.h>
#include <string.h>

#define N 4096
int main(int argc, const char *argv[])
{
    char str[N];
    printf("Please input a string:\n");
    fgets(str, N, stdin);
    int tmp;

    int i = 0;
    int mid = strlen(str)/2;

    for (i = 0; i < mid; i++) 
    {
            tmp = str[i];
            str[i] = str[mid + i];
            str[mid + i] = tmp;
    }
    printf("%s\n", str);
    return 0;
}
