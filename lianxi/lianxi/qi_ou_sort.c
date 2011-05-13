#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8

void insert_odd(int i)
{
    int k = 0; 
    int tmp = 0;
    while(array[k] < array[i])
    {
        k++;
    }
    tmp = array[i];
    memmove(&array[k+1], &array[k], k-i);
    array[k]
}
void insert_even(int i)
{
    int j = 0;
    int tmp = 0;
    while(array[j] > array[i])
        j--;
    tmp = array[i];
    memmove(&array[i], &array[i+1], );
}
int main(int argc, const char *argv[])
{
    int i = 0;    
    int array[N];
    srand(time(NULL));
    for (i = 0; i < N; i++) 
    {
        array[i] = rand()%100;
        printf("%5d", array[i]);
    }
    printf("\n");
    for(i = 0, i < N, i++)
    {
        if(array[i]%2 == 0)
        {
            insert_even();
        }
        else
        {
            insert_odd();
        }
        
    }
    return 0;
}

