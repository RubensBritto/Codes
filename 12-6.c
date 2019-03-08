#include<stdio.h>

int main()
{
	int tam1, tam2,i,j;
	printf("Digite o tamanho do primeiro vetor\n");
	scanf("%d",&tam1);
	printf("Digite o tamanho do segundo vetor\n");
	scanf("%d",&tam2);
	int ver1[tam1], ver2[tam2];

	printf("Complete o primeiro vetor de tamanho [%d]\n",tam1);

	for(i = 0; i < tam1; i++)
	{
		scanf("%d",&ver1[i]);
	}

	printf("Complete o segundo vetor de tamanho [%d]\n",tam2);

	for(i = 0; i < tam2; i++)
	{
		scanf("%d",&ver2[i]);
	}

	if(tam1 >= tam2)
	{
		for(i = 0; i < tam1; i++)
		{
			for(j = 0; j < tam2; j++)
			{
				if(ver1[i] == ver2[j])
				{
					printf("%d\n",ver1[i]);
				}
			}
		}

	}
	else
	{
		for(i = 0; i < tam1; i++)
		{
			for(j = 0; j < tam2; j++)
			{
				if(ver1[i] == ver2[j])
				{
					printf("%d\n",ver1[i]);
				}
			}
		}
	}
	return 0;

}