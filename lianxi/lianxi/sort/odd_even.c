#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
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
    printf("\n");

    printf("The sort:\n");
    int j = 0;
    int temp = 0;
    int index = 0;

    for (i = 0; i < N; i++) 
    {
        for (j = i+1; j < N; j++) 
        {
            if(arr[j]%2 != 0)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                index++;
                break;
            }
        }
        printf("%5d", arr[i]);
    }
    printf("\n");

    printf("The result:\n");
    for (i = 0; i < index; i++) 
    {
        for (j = i+1; j < index; j++) 
        {
            if (arr[j] < arr[i]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%5d", arr[i]);
    }

    for (i = index; i < N; i++) 
    {
        for (j = i+1; j < N; j++) 
        {
            if (arr[j] < arr[i]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%5d", arr[i]);
    }
    printf("\n");
    return 0;
}
