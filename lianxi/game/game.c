#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4
#define M 10

void detect(char s[])
{
    int i, j, num;
    char ch[N];
    for (num = 0; num < M; num++) 
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
            printf("Congratulations on you right！\n");
            break;
        }
    }
    if(num == M)
    printf("Unfortunately, the correct answer for ：%s\n", s);
}

int main(int argc, const char *argv[])
{
    int i, j;
    char s[N+1];
    srand(time(NULL));
    for (i = 0; i < N; i++) 
    {
        s[i] = rand()%10;
        for(j = 0; j<i; j++)
        {
            if(s[i] == s[j])break;
        }
        if(i < j)
            i--;
        else
        {
            s[i] += '0';
            putchar('*');
        }
        
    }

    s[i] = '\0';
/*    for (i = 0; i < N; i++) 
    {
        printf("%d", s[i]);
    }
*/    
    printf("\nYou have ten times opportunity!\n");
    detect(s);
    return 0;
}
