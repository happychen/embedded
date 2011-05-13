#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 0;
    int i = 0;
    int counter=0;
   unsigned int mask = 0x01; 
    puts("Please input number :");
    scanf("%d",&a);
    puts("The result:\n");
    
    for(i = 0;i < sizeof(int)*8 ;i++)
    {
//        printf("%d",((mask & a)!= 0 ? 1: 0));
        if ((mask & a) != 0) 
        counter++;
        mask <<= 1;

    }
    printf("%d\n",counter);
    printf("\n");
    return 0;
}
