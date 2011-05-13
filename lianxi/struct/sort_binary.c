#include <stdio.h>
#define N 5
typedef struct number 
{
    int a;
    int num;
}Num;
void sort_num(Num num[],int number);
int main(int argc, const char *argv[])
{
    Num sort[N];
    int i = 0;
    for (i = 0; i < N; i++) 
    {
        scanf("%d",&sort[i].a);
    }
    sort_num(sort,N);
    return 0;
}
void sort_num(Num num[],int number)
{
    int i = 0;
    int j = 0;
    int d = 0;
    unsigned int mask = 0x01<<sizeof(int)*8-1;
    int counter = 0;
    Num temp[1];
    for (i = 0; i < N; i++) 
    {
        for (d = 0; d < sizeof(int)*8; d++) 
        {
            if ((num[i].a & mask) != 0) 
            {
                counter++;
            }
            mask >>=1;
        }
        num[i].num = counter;
        mask = 0x01<<sizeof(int)*8-1;
        counter = 0;
        printf("%4d\n",num[i].num);
    }
    for (i = 0; i < N-1; i++) 
    {
        for (j = i+1; j < N; j++) 
        {
            if (num[j].num > num[i].num) 
            {
               temp[1] = num[i];
               num[i] = num[j];
               num[j] = temp[1];
            }
            if (num[i].num == num[j].num) 
            {
                if (num[j].a > num[i].a) 
                {
                    temp[1] = num[i];
                    num[i] = num[j];
                    num[j] = temp[1];
                }
            }
        }
    }
    for (i = 0; i < N; i++) 
    {
        printf("%4d",num[i].a);
    }    
} 

