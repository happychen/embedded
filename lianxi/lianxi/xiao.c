#include <stdio.h>

#define N 4096
int main(int argc, const char *argv[])
{
    char str[N];
    int i = 0;
    printf("Please input a string:\n");
    fgets(str, N, stdin);
    for (i = 0; str[i] != '\0' ; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
    }
    printf("The result:\n");
    printf("%s", str);
    return 0;
}
