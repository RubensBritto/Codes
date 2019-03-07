#include<stdio.h>

int main()
{
	int i,tam,j;
	printf("Digite o tamanho do vetor\n");
	scanf("%d",&tam);
	int ver[tam];

	for(i = 0; i < tam; i++)
	{
		scanf("%d",&ver[i]);
	}

	for(i = 0; i < tam; i++)
	{
		for(j = i+1; j < tam; j++)
		{
			if(ver[i] > ver[j])
			{
				int aux = ver[i];
				ver[i] = ver[j];
				ver[j] = aux;
			}
		}
	}

	for(i = 0; i < tam; i++)
	{
		printf("%d ",ver[i]);
	}
	return 0;
}