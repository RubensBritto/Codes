#include <stdio.h>

int main()
{
	int tam,i,j,div = 0;
	printf("Digite o tamanho do vetor\n");
	scanf("%d",&tam);
	int ver[tam];
	printf("Preencha os [%d] valores do vetor\n",tam);
	
	for(i = 0; i < tam; i++)
	{
		scanf("%d",&ver[i]);
	}

	for(i = 0; i < tam; i++)
	{
		for (j= i+1; j < tam; j++)
		{
			if(ver[i] > ver[j])
			{
				int aux= ver[i];
				ver[i] = ver[j];
				ver[j] = aux;
			}
		}
	}
	int pause = tam - 1;
	int new_ver[pause];
	i = 0;
	for(j = 0; j < pause; i++,j++)
	{
		new_ver[j] = ver[i+1] - ver[i];
	}

	for (j = 0; j < pause; j++)
	{
		printf("%d\n",new_ver[j]);
	}




	return 0;
}
