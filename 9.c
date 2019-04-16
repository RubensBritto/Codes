#include<stdio.h>

int main ()
{
	int num,i,j,primo = 1;
	scanf ("%d", &num);

	for(i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			for(j = 2; j < i; j++)
			{
				if(i % j == 0)
				{
					primo = j * primo;
					printf("%d\n",j);				
				}
			}
		}
	}
	if (primo == num)
	{
		printf("%d: é primo\n",num);
	}
	else
	{
		printf("%d: nao é primo\n",num);
	}
	return 0;
}