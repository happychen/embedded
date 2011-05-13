#include <stdio.h>

void Reverse(char *pbegin, char *pend)
{
    if((pbegin == NULL) || (pend == NULL))
        return ;
    while(pbegin < pend)
    {
        char temp = *pbegin;
        *pbegin = *pend;
        *pend = temp;

        pbegin++;
        pend--;
    }
}

char *Reverse_sentense(char *pdate)
{
    if (pdate == NULL) 
    {
        return NULL;
    }
    char *pbegin = pdate;
    char *pend = pdate;

    while(*pend != '\0')
    {
        pend++;
    }
    pend--;

    Reverse(pbegin, pend);

    pbegin = pend = pdate;
    while(*pbegin != '\0')
    {
        if (*pbegin != ' ') 
        {
            pbegin++;
            pend++;
            continue;
        }
        else if((*pend == ' ') || (*pend == '\0'))
        {
            Reverse(pbegin, --pend);
            pbegin = ++pend;
        }
        else
        {
            pend++;
        }
    }
    return pdate;
}
int main(int argc, const char *argv[])
{
    char array[100] = "I am a student";
    char *pbegin, *pend;
    char *pdate;
    pbegin = pend = array;

    Reverse(pbegin, pend);
    printf("Now, the string is :\n");
    printf("%s\n", array);
    pdate = array;
    Reverse_sentense(pdate);
    
    printf("%s\n", array);
    return 0;
}
