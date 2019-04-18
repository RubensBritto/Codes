#include <stdio.h>

int main()
{
	int gabarito[50], prova[50], pontos,i,j;
	printf("Digite o gabarito da prova\n");
	for(i = 0; i < 50; i++)
	{
		scanf("%d",&gabarito[i]);
	}
	printf("Digite as alternativa da prova\n");
	
	for(j = 0; j < 50; j++)
	{
		scanf("%d",&prova[j]);
	}
	for(i = 0; i < 50; i++)
	{
		if(prova[i] == gabarito[i])
		{
			pontos++;
		}
	}

	printf("O total de acerto foi: %d\n", pontos);
	return 0;
}
