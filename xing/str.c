#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[20];
    char ch;
    printf("Please input a string:\n");
    gefs(str);
    printf("%s", str);

    printf("Please input a struct\n");
    scanf("%c", ch);
    
    delete_ch(str, ch);
    return 0;
}
void delete_ch(char *str, char ch)
{
    int i = 0;
    for (i = 0; i < strlen(str); i++) 
    {
        if(str[i] == ch)
        {
            printf("%c", str[i]);
        }
    }
}

