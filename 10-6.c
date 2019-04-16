#include <stdio.h>

int main()
{
	int i,tam,t,numb,j = 1;
	printf("Digite o tamanho do vetor desejado \n");
	scanf("%d",&tam);
	int k = tam+1;
	int v[tam], new[k];
	
	printf("Complete os [%d] do vetor\n",tam);
	
	for(i = 1; i <= tam; i++)
	{
		scanf("%d",&v[i]);
	}

	printf("Digite o numero que deseja inserir\n");
	scanf("%d",&numb);

	for(i = 1; i <= k; i++)
	{
		if(v[i] > numb)
		{
			int aux = v[i];
			v[i] = numb;
			numb = aux;
		}
	}
	
	for(i = 1; i <= k; i++)
	{
		for(j = i+1; j <= k; j++)
		{
			if(v[i] >= v[j])
			{
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	printf("Seu novo vetor é \n");

	for(i = 1; i <= k; i++)
	{
		printf("%d ",v[i]);
	}

	return 0;
}
