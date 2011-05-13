#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20
void init_array(int a[], int n );
void print_array(int a[], int n);
void paixu_array(int a[], int n);
void xuan_array(int a[], int n);
void quick_sort(int a[], int x, int y);

int main(int argc, const char *argv[])
{
    int array[N];
    init_array(array, N);
    printf("The result :");
    getchar();
    print_array(array, N);
//    paixu_array(array, N);
//    xuan_array(array, N);
    quick_sort(array, 0, N-1);
    printf("<---------------------------------------------->");
    getchar();
    print_array(array, N);
    return 0;
}
void init_array(int a[], int n )
{
    int i = 0;
    srand(time(NULL));
    for (i = 0; i < N; i++) 
    {
        a[i] = (rand()%100);
    }
    printf("\n");     
}
void print_array(int a[], int n)
{
    int i = 0;
    for (i = 0; i < N; i++) 
    { 
        if (i%10 == 0) 
        {
            printf("\n");
        }
        printf("%5d", a[i]);
    }
    printf("\n");
}
void paixu_array(int a[], int n)
{
    int i = 0;
    int j = 0;
    int t = 0;
    for (i = 0; i < N-1; i++) 
    {
        for (j = i+1; j < n; j++) 
        {
            if(a[j] < a[i])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\n");
}
void xuan_array(int a[], int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int tmp;
    for(i = 0;i < n-1;i++)
    {
        k = i;
        for(j = i+1;j < n;j++)
        {
            if(a[k] > a[j])
            {
                k = j;
            }
        }
        if(k != i)
        {
            tmp = a[i];
            a[i] = a[k];
            a[k] = tmp;
        }
    }
    printf("\n");
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
    if(x < j)
    {
        quick_sort(a, x, j);
    }
     if(i < y) 
     {
        quick_sort(a, i, y); 
     }
}
