#include <stdio.h>

char first_char(char *pstring);
int main(int argc, const char *argv[])
{
    char pstring[4096];
    char ch;
    ch = first_char(pstring);
    printf("%c\n", ch);
    return 0;
}
char first_char(char *pstring)
{
    if(!pstring)
    {
        return 0;
    }
    const int size = 256;
    unsigned int hash[size];
    unsigned int i;
    for(i = 0; i < size; ++i)
    {
        hash[i] = 0;
    }
    char* key = pstring;
    while(*(key) != '\0')
    {
        hash[*(key++)]++;
    }
    key = pstring;
    while(*key != '\0')
    {
        if(hash[*key] == 1)
            return *key;
        key++;
    }
    return 0;
}
