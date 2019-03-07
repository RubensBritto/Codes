#include <stdio.h>

int main()
{
	int i, tam, delet,k =1;
	printf("Digite o tamanho do vetor desejado \n");
	scanf("%d",&tam);
	int j = tam - 1;
	int ver[i], new_ver[j];

	printf("Complete os [%d] do vetor\n",tam);

	for(i = 1; i <= tam; i++)
	{
		scanf("%d",&ver[i]);
	}

	printf("Digite a posição do numero que deseja remover\n");
	scanf("%d",&delet);

	for (i = 1; i <= tam; i++)
	{
		if(i == delet)
		{
			new_ver[k] = ver[i+1];
			k++;
			i = i+1;
		}
		else
		{
			new_ver[k] = ver[i];
			k++;
		}
	}
 	
 	for(i = 1; i <= j; i++)
 	{
 		printf("%d\n",new_ver[i]);
 	}
	return 0;
}