#include<stdio.h>

int main()
{
	int num, resto, i, j = 0, ver[j];
	printf("Digite o numero que deseja converter\n");
	scanf("%d",&num);
	while(num != 0)
	{
		if(num % 2 == 0)
		{
			ver[j] = 0;
			j++;
			num = num /2;
		}
		else
		{
			ver[j] = 1;
			j++;
			num = num /2;
		}
	}
	for(i = j-1; i >= 0; i--)
	{
		printf("%d ",ver[i]);
	}
}
