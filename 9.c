#include<stdio.h>

int main ()
{
	int num,i,primo = 0;
	scanf ("%d", &num);

	for(i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			primo++;
		}
	}

	if (primo == 2)
	{
		printf("%d: é primo\n",num);
	}
	else
	{
		printf("%d: nao é primo\n",num);
	}
	return 0;
}