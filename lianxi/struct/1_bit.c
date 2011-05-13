#include <stdio.h>

struct WRP_INT
{
    int a;
    int num;
};
typedef struct WRP_INT Num;

void sort_bit(Num num[])
{
    int i, j;
    unsigned int mask = (0x01<<sizeof(int)*8-1);
    int counter = 0;
    Num tmp[1];

    printf("\nThe 1 are counter:\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < sizeof(int)*8; j++) 
        {
            if ((num[i].a & mask) != 0) 
            {
                counter++;
            }
            mask >>= 1;
        }
        num[i].num = counter;
        mask = (0x01<<sizeof(int)*8-1);
        counter = 0;
        printf("%5d", num[i].num);
    }
    printf("\nThe sort:");
    
    for (i = 0; i < 4; i++) 
    {
        for (j = i+1; j < 5; j++) 
        {
            if (num[i].num > num[j].num) 
            {
                tmp[1] = num[i];
                num[i] = num[j];
                num[j] = tmp[1];
            }
            if (num[i].num == num[j].num) 
            {
                if (num[j].a < num[i].a) 
                {
                    tmp[1] = num[i];
                    num[i] = num[j];
                    num[j] = tmp[1];
                }
            }
        }
    }
    for (i = 0; i < 5; i++) 
    {
        printf("%5d", num[i].a);
    }
    printf("\n");

}
int main(int argc, const char *argv[])
{
    Num sort[5];
    int i = 0;
    printf("Please input 5 numbers:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &sort[i].a);
    }
    sort_bit(sort);
    return 0;
}
