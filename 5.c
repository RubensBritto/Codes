#include <stdio.h>

int main ()
{
	int num,div,i,j;
	printf("Digite um número para ser calculado\n");
	scanf("%d",&num);

	for(i = 1; i <= num; i++)
	{
		div = 0;
		for(j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				div += j;
			}
			if (j == i)
			{
				if((i *2) == div)
				{
					printf("%d é um numero perfeito\n",i );
				} 
			}
		}
	}

	return 0;
}