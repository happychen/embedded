
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4
#define NUM 10

void detect(char s[])
{
    int i, j, num;
    char ch[N];
    for (num = 0; num < NUM; num++) 
    {
        int a = 0;
        int b = 0;
        printf("第%d次机会：\n", num+1);
        for (i = 0; i < N; i++) 
        {
            ch[i] = getchar();
            if(ch[i] >='0' && ch[i] <= '9')
            {
                for (j = 0; j < i; j++) 
                {
                    if(ch[i] == ch[j]) break;
                }
                if(j < i)
                    i--;
                else
                {
                    putchar(ch[i]);
                    for (j = 0; j < N; j++) 
                    {
                        if(ch[i] == s[j])
                        {
                        
                            if(i == j)
                                a++;
                            else
                                b++;
                        }
                    }
                }
            }
            else
                i--;
        }
        printf("\t%dA%dB\n", a, b);
        if(a == N)
        {
            printf("恭喜你答对了！\n");
            break;
        }
    }
    if(num == NUM)
    printf("很遗憾，正确答案为：%s\n", s);
}

int main(int argc, const char *argv[])
{
    int i, j;
    char s[N+1];
    srand(time(0));
    for (i = 0; i < N; i++) 
    {
        s[i] = rand()%10;
        for(j = 0; j<i; j++)
        {
            if(s[i] == s[j])break;
        }
        if(j < i)i--;
        else
        {
            s[i] += '0';
            putchar('*');
        }
    }
    s[i] = '\0';
    printf("%s\n", s);
    printf("\n总共%d次机会\n", NUM);
    detect(s);
    return 0;
}
