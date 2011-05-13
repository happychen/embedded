#include <stdio.h>
#include <string.h>

void sort(char *p, int n)
{
    int i;
    char temp, *p1, *p2;
    for (i = 0; i < n/2; i++) 
    {
        p1 = p+i;
        p2 = p+(n-1-i);
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}
void inversor(char *p)
{
    int i;
    char tmp, *p1, *p2;

    while(*p != '\0')
    {
        p2 = p;
        while(*p2 != ' ')
        {
            p2++;
        }
        p2--;
        for (i = 0; i < (p2-p1)/2; i++) 
        {
            p1 = p + i;
            p2 = p + ((p2-p1)/2-1-i);
            tmp = *p1;
            *p1 = *p2;
            *p2 = tmp;
        }
        p1 = p2;
    }
}
int main(int argc, const char *argv[])
{
    int  n;
    char *p;
    char num[4096];
    printf("Please input a string:\n");
    fgets(num, 4095, stdin);
    
    n = strlen(num);
    p = num;
    sort(p, n);

    printf("Now, the sequense is:");
    printf("%s\n", num);
    p = num;
    inversor(p);
    printf("%s\n", num);
    return 0;
}
