#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8
void sort_odd(int arr[], int i)
{
    int temp = 0;
    int j = 0;

    for(i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++) 
        {
            if((arr[j] < arr[i]) && (arr[j]%2 == 1))
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[i];
            }
            
        }
    }
    
}
void sort_even(int arr[], int i)
{
    int temp = 0;
    int j = 0;
    for(i = 0; i < N; i++)
    {
        for (j = N; j < 0; j--) 
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[i];
            }
            
        }
    }

}
int main(int argc, const char *argv[])
{
    int i = 0;
    int arr[N];
    srand(time(NULL));
    for (i = 0; i < N; i++) 
    {
        arr[i] = rand()%100;
        printf("%5d", arr[i]);
    }
    for (i = 0; i < N; i++) 
    {
        if (arr[i]%2 == 1) 
        {
            sort_odd(arr, i);
        }
        else
        {
            sort_even(arr, i);
        }
    }

    printf("\nThe sort result:\n");
    for (i = 0; i < N; i++) 
    {
        printf("%5d", arr[i]);
    }

    printf("\n");
    return 0;
}
