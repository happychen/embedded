#include <stdio.h>

Reverse(char *arr, int b, int e)
{
    for (; b < e; b++, e--) 
    {
        char temp = arr[e];
        arr[e] = arr[b];
        arr[b] = temp;
    }
}
Rightshift(char *arr, int N, int k)
{
    K % = N;
    Reverse(arr, 0, N-k-1);
    Reverse(arr, N-k, N-1);
    Reverse(arr, 0, N-1);
}
int main(int argc, const char *argv[])
{
    
    return 0;
}
