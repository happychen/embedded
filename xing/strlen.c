/*输入两个字符串， 求它们最长相同子串的长度
 */
#include <stdio.h>
#include <string.h>

#define N 4096
int same_str(char *str1, char *str2)
{
    char *p;
    char *q;
    int counter = 0;
    int len = 0;
    int i, j;
    for(i = 0; i < strlen(str1)-1; i++)
    {
        p = str1 + i;
        q = str2;
        for(j = 0, q = str2; j < strlen(str2)-1; j++, q = str2 + j, counter = 0)
        {
            while(*p == *q)
            {
                p++;
                q++;
                counter++;
            }
            if(counter > len)
            {
                len = counter;
            }
        }
    }
    return len;
}
int main(int argc, const char *argv[])
{
    char str1[N];
    char str2[N];
    int len;

    printf("Please input a string1:\n");
    fgets(str1, N, stdin);
    printf("Please input a string2:\n");
    fgets(str2, N, stdin);

    printf("string1:\t%s", str1);
    printf("string2:\t%s", str2);
    len = same_str(str1, str2);

    printf("%d\n", len);
    return 0;
}
