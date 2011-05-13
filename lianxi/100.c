#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

void init_array(int a[], int n);
void print_array(int a[], int n);
void bubble_array(int a[], int n);
void quick_sort(int a[], int x, int y);
void xuan_array(int a[], int n);

int main(int argc, const char *argv[])
{
    int array[N];
    init_array(array, N);
    printf("The result :");
    print_array(array, N);
//    bubble_array(array, N);
//    quick_sort(array, 0, N-1);
    xuan_array(array, N);
    printf("The sort:");
    getchar();
    print_array(array, N);

    return 0;
}
void init_array(int a[], int n)
{
    int i = 0;
    srand(time(NULL));
    for (i = 0; i < n; i++) 
    {
        a[i] = rand()%100;
    }
}
void print_array(int a[], int n)
{
    int i =  0;
    for (i = 0; i < n; i++) 
    {
        if (i%10 == 0) 
        {
            printf("\n");
        }
        printf("%5d", a[i]);
    }
    printf("\n");
}
void bubble_array(int a[], int n)
{
    int i = 0;
    int j = 0;
    int t = 0;
    for (i = 0; i < n-1; i++) 
    {
        for (j = i+1; j < n; j++) 
        {
            if (a[i] > a[j]) 
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
void quick_sort(int a[], int x, int y)
{
    int i = x;
    int j = y;
    int t;
    int mid = a[(x+y)/2];
    while(i <= j)
    {
        while(a[i] < mid) i++;
        while(a[j] > mid) j--;
        if (i <= j) 
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    }
    if (i < y) 
    {
        quick_sort(a, i, y);
    }
    if (x < j) 
    {
        quick_sort(a, x, j);
    }
}
void xuan_array(int a[], int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int t;
    for (i = 0; i < n-1; i++) 
    {
        k = i;
        for (j = i+1; j < n; j++) 
            if(a[k] > a[j])
            k = j;    
        {
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
}
