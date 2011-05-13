#include <stdio.h>
#include <stdlib.h>
#define N 4096

int main(int argc, const char *argv[])
{
    FILE *p1;
    FILE *p2;
    int i = 0;
    int n = 0;

    char str[N] = "hello world!";
    p1 = fopen("file1", "r+");
    if (p1 == NULL) 
    {
        perror("p1");
        exit(0);
    }
    p2 = fopen("file2", "r+");
    if (p2 == NULL) 
    {
        perror("p2");
        exit(0);
    }

    while(!feof(p1))
    {
        n += fread(&str[i], 1, 4, p1);
        i += 4;
    }
    i -= 4;
    fwrite(&str[0], 1, n, p2);

    printf("i = %d\tn = %d\n", i, n);
    fprintf(p1, "%d\t%d\n", i, n);
    fclose(p1);
    fclose(p2);
    return 0;
}
