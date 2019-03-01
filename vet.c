#include <stdio.h>

int main()
{
	int idade[5],i,j,aux;

	for(i = 0; i < 5; i++)
	{
		scanf("%d",&idade[i]);
	}
		for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if (idade[j] > idade[i]) //crescente, < decrecente
			{
				aux = idade[j];
				idade[j] = idade[i];
				idade[i] = aux;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",idade[i]);
	}

	return 0;
}