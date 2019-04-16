#include <stdio.h>

int main ()
{
	int i,v[25];
	printf("Digite os 25 numeros sorteados\n");
	
	for(i = 0; i < 25; i++)
	{
		scanf("%d",&v[i]);
	}

	printf("O bilhete premiado sera {");

	for(i = 4; i < 25; i+= 5)
	{
		if (i != 24)
			printf(" %d,",v[i]);
		if (i == 24)
			printf(" %d }\n", v[i]);
	}

	return 0;
}
