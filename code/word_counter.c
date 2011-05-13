#include <stdio.h>
#define N 4096

int counter_word(char *str)
{
    int i = 0;
    int num = 0;
    int word = 0;
    for (i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ' ')
            word = 0;
        else if(word == 0)
        {
            word = 1;
            num++;
        }
    }
    return num;
}
int main(int argc, const char *argv[])
{
    char str[N];
    int num = 0;

    printf("Please input a string:\n");
    fgets(str, N, stdin);
    num = counter_word(str);
    printf("There are %d words in the line.\n", num);
    return 0;
}
