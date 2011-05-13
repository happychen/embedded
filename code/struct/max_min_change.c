#include <stdio.h>

void input(int number[])
{
    int i = 0;
    printf("input 10 nubmers:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &number[i]);
    }
}
void max_min_value(int number[])
{
    int *max, *min, *p, temp;
    max = min = number;
    for (p = number+1; p < number+10; p++) 
    {
        if(*p > *max)
            max = p;
        else if(*p < *min)
            min = p;
    }
    temp = number[0];
    number[0] = *min;
    *min = temp;
    if (max == number) 
        max = min;
    temp = number[9];
    number[9] = *max;
    *max = temp;
}
void output(int number[])
{
    int *p;
    printf("Now, they are:\n");
    for (p = number; p < number+10; p++) 
    {
        printf("%5d", *p);
    }
    printf("\n");
}
    
int main(int argc, const char *argv[])
{
    int number[10];    
    input(number);
    max_min_value(number);
    output(number);
    return 0;
}
