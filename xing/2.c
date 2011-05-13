#include <stdio.h>
#include <string.h>

void find(char *str, char ch);
int main(int argc, const char *argv[])
{
    char str[] = "hello,world";

    find(str, );
    return 0;
}
void find(char *str, char ch)
{
    char *p = str;
    
    int i = 0;
    for(i = 0; str[i] != '\0', i++)
    {
        if (str[i] == *p) 
        {
            p++;
        }
        else
        {
            printf("%c\n", str[i]);;
        }
    }
}
