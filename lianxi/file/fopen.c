#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *fp;
    char str[100] = "hello world";
    char r_str[100];
    int number = 100;
    int r_number = 0;

    fp = fopen("text", "w+");
    if(fp == NULL)
    {
        perror("malloc");
        exit(0);
    }
//    fprintf(fp, "number= %d  r_number= %d", number,r_number);
//    fscanf(fp, "%d  %d",&number, &r_number);
    fscanf(fp, "%s", str);
    fprintf(fp, "%s", str);
    fclose(fp);
    return 0;
}
