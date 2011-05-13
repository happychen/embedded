#include <stdio.h>
#include <string.h>

int find_char(char *str);

int main(int argc, const char *argv[])
{
    char *str = "alabcdelfg";
    int number = 0;
    number = find_char(str);
    printf("%c\n", str[number]);
    
    return 0;
}
int find_char(char *str)
{
    int number = 0;
    int i = 0;
    for (number = 0; number < strlen(str); number++) 
    {
        for(i = number+1; i < strlen(str); i++) 
        {
            if(str[number] == str[i]);
            return number;
        }
    }
}
