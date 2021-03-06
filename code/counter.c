#include <stdio.h>

int main(int argc, const char *argv[])
{
    char c ;
    int letters = 0;
    int space = 0;
    int digit = 0;
    int other = 0;

    printf("Please input a string:\n");
    while((c = getchar()) != '\n')
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if(c == ' ')
            space++;
        else if(c >= '0' && c <= '9')
            digit++;
        else
            other++;
    }
    printf("letters: %d\nspace: %d\ndigit: %d\nother: %d\n", letters, space, digit, other);

    return 0;
}
