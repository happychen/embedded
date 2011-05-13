#include <stdio.h>

struct WRP_int
{
    int a;
    int num;
};

struct WRP_int b;
int sort_bit(int a[])
{
    int i, j, tmp;
    int count = 0;

    for (i = 0; i < 10; i++) 
    {
        b[i].a = a[i];
        while(b[i].a)
        {
            if(b[i].a & 1)
                count++;
            b[i].a = b[i].a >> 1;

            b[i].num = count;
            printf("%d\n", count);
        }
        
    }
   
    for (i = 0; i < 10; i++) 
    {
        for (j = i+1; j < 10; j++) 
        {
            if(b[i].num > b[j].num)
            {
                tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
/*    for (i = 0; i < 10; i++) 
    {
        printf("%5d", b[i].a);
    }
    
    printf("\n");
*/
}
int main(int argc, const char *argv[])
{
    int a[10] = {4,6,8,23,21,10,7,11,9,16};
    sort_bit(a);
//    printf("Please input a number:\n");
//    scanf("%d", &i);

//    count = number_solution(i);
//    printf("The '1' count:%d\n", count);
    return 0;
}
