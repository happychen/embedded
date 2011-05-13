#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

void guess_digital(int a[])
{
	char b[100],d[10];
    int i = 0;
    int j = 0;
	printf("Please input 4 different numbers or I give up\n");

	while(1)
	{
		fgets(b,99,stdin);
        b[strlen(b) - 1] = '\0';
        int k = 0;
        printf("Please again input 4 different numbers or Input: I give up\n");
		if(strcmp(b,"I give up") == 0)
		{
            printf("The correct answer is:\n");
			for(i = 0; i < 4; i++)
				printf("%d",a[i]);
			printf("\n");
			break;
		}
		else
		{
			for(i = 0; i < 4; i++)
			{
				for(j = 0; j < 4; j++)
                {
					if(((b[i] - '0') == a[j]) && (i == j))
					{
						d[k] = 'A';
						k++;
						break;
					}
					else if(((b[i] - '0') == a[j]) && (i != j))
					{
						d[k] = 'B';
						k++;
						break;
					}
                }

			}
			d[k] = '\0';

			if(strcmp(d,"AAAA") == 0)
			{
				printf("you are good!\n");
				break;
			}
			else
				printf("%s\n",d);
		}
	}
}
int main(void)
{
	int a[4];
	int i = 0;
    int j = 0;

	srand(time(NULL));
	for(i = 0; i < 4; i++)
	{
		a[i]= rand()%10;
		for(j = 0; j < i; j++)
        {
			if(a[j] == a[i])
			i--;
        }
	}

	for(i = 0; i < 4; i++)
    {
		printf("%d",a[i]);
    }
    printf("\n");
    guess_digital(a);

	return 0;
}
