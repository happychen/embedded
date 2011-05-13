#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(int argc, const char *argv[])
{
    int array[100];
    int i = 0;
    int j = 0;
    int temp = 0;

    srand(time(NULL));
    for (i = 0; i < 100; i++) 
    {
        array[i] = rand()%100;
    }
    printf("The 100 numbers :\n");
    for (i = 0; i < 100; i++) 
    {
        printf("%5d", array[i]);
    }

    for (i = 0; array[i] != '\0'; i++) 
    {
        if (array[i] % 2 == 0) 
        {
            for (j = 99; i <= j; j--) 
            {
                if (array[j] % 2 != 0) 
                {
                    if(array[j] > array[i])
                    {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                    }
                }
            }
        }
    }
   
    printf("\nThe sort:\n");
    for (i = 0; i < 100; i++) 
    {
        printf("%5d", array[i]);
    }

    printf("\n");
    return 0;
}
