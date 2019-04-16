#include<stdio.h>

int main()
{
	int first,second,i,j,k = 0;
	printf("Digite o tamanho do primeiro vetor\n");
	scanf("%d",&first);
	printf("Digite o tamanho do segundo vetor\n");
	scanf("%d",&second);
	int ver_first[first], ver_second[second];

	printf("Digte os %d valores do primeiro vetor\n",first);
	for(i = 0; i < first; i++)
	{
		scanf("%d",&ver_first[i]);
	}

	printf("Digte os %d valores do segundo vetor\n",second);
	for(i = 0; i < second; i++)
	{
		scanf("%d",&ver_second[i]);
	}

	for(i = 0; i < first; i++)
	{
		for(j = 0; j < second; j++)
		{
			if(ver_first[i] == ver_second[j])
			{
				k++;
			}
		}
	}
	k = 0; //zera porque verifica para saber o valor do novo vetor e depois compara para add ao novo vetor
	int ver_result[k];
	for (i = 0; i < first; i++)
	{
		for(j = 0; j < second; j++)
		{
			if(ver_first[i] == ver_second[j])
			{
				ver_result[k] = ver_first[i];
				k++;
			}
		}
	}
	for(i = 0; i < k; i++)
	{
		printf("%d\n",ver_result[i]);
	}

	return 0;
}