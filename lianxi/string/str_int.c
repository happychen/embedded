/*
#include <stdio.h>
#include <stdlib.h>

int str_int(char *str)
{
    int value = 0;
    int sign = 1;
    if (*str == '-') 
    {
        sign = -1;
        str++;
    }
    while(*str)
    {   
        value = value *10 + *str -'0';
        str++;
    }
    return sign*value;
}
int main(int argc, const char *argv[])
{
    printf("Number = %d\n", str_int("1234"));
    printf("Number = %d\n", str_int("-1267"));
    system("pause");
    return 0;
}
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[20];
    int i = 0;
    long number = 0;
    printf("input number:\n");
    fgets(str, 19, stdin);

    getchar();
    while(str[i] != '\0')
    {
        number = number*10 + (str[i] - '0');
        i++;
    }
    printf("number is %ld\n", number);
    getchar();
    return 0;
}
