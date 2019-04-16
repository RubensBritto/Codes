#include<stdio.h>

int main()
{
	int num,i,total = 0;
	printf("Digite um numero\n");
	scanf("%d",&num);
	for (i = 1; i <= num; i++)
	{
		total += i*i;
	}

	printf("%d\n",total );
	return 0;
}