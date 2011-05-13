#include <stdio.h>
#include <string.h>

int my_strcmp(char *dest, char *src, int num)
{
    int i;
    if(num == 0)
    return 1;
    for (i = 0; i < num; i++) 
    {
       if (strcmp(dest, src) == 0)
       return 0;
       src++;
    }
    return 1;
}
int again_strcmp(char *p, char (*q)[10] , int n)
{
    int i;
    for (i = 0; i < n; i++) 
    {
        if(strcmp(p, q[i]) == 0)
        {
            printf("Please again a name:\n");
            fgets(p, 10, stdin);
        }
    }
}
int main(int argc, const char *argv[])
{
    char name[5][10];
    char tmp[10];
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Please input a name:\n");
        fgets(tmp, 10, stdin);
        again_strcmp(tmp, name, i);
        if(my_strcmp(tmp, name[0], i) == 1)
        strcpy(name[i], tmp);
/*        else
        {
            printf("Please input again:\n");
            i--;
        }
*/        
    }
    for(i = 0; i < 5; i++)
    printf("%d\t%s\n", i, name[i]);
    return 0;
}
