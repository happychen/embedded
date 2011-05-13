#include<stdio.h>

#define N 1024
#define LEN 10

struct MAX
{
	int s;
	int head;
	int end;
};

int main(void)
{
	int a[LEN];
	struct MAX max[N];
	int i, j, k = 0;
	int sum;
	int max1, head1,end1;

	printf("请输入%d个数\n",LEN);
	for(i = 0; i < LEN; i++)
		scanf("%d", &a[i]);

	for(i = 0; i < LEN; i++)
	{
		sum = 0;
		for(j = i; j < LEN; j++)
		{
			sum = sum+a[j];
			max[k].s = sum;
			max[k].head = i;
			max[k].end = j;
			k++;
		}
	}

	max1 = max[0].s;
	for(i = 0; i < k; i++)
		if(max1 < max[i].s)
		{
			max1 = max[i].s;
			head1 = max[i].head;
			end1 = max[i].end;
		}

	printf("max namber is a[%d...%d] = %d\n",head1, end1, max1);

	return 0;
}
