#include <stdio.h>
#include <stdlib.h>

void mycp(char *src, char *dest)
{
    FILE *fps, *fpd;
    char buf[4096];
    int size;
    fps = fopen(src, "rb");
    if (fps == NULL) 
    {
        printf("Open %s fail\n", src);
        return (-1);
    }

    fpd = fopen(dest, "wb");
    if (fps == NULL) 
    {
        printf("Open %s fail\n", dest);
        return (-1);
    }
    size = fread(buf, 1, 4096, fps)
    fwrite(buf, 1, size, fpd);

    fclose(fps);
    fclose(fpd);
    return 0;
}
int main(int argc, const char *argv[])
{
    if (argc != 3) 
    {
        printf("Open\n");
        return (-1);
    }
    mycp(argv[1], argv[2]);
    printf("success!\n");
    
    return 0;
}
