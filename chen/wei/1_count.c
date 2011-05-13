#include <stdio.h>

int number_solution(int i)
{
    int count = 0;
    while(i)
    {
        if(i & 1)
            count++;

        i = i >> 1;
    }
    return count;

}
int main(int argc, const char *argv[])
{
    int i = 0;
    int count;
    printf("Please input a number:\n");
    scanf("%d", &i);

    count = number_solution(i);
    printf("The '1' count:%d\n", count);
    return 0;
}
