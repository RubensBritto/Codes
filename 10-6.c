#include <stdio.h>

int main()
{
	int i,tam,t,numb,k = 1;
	printf("Digite o tamanho do vetor desejado \n");
	scanf("%d",&tam);
	int j = tam+1;
	int v[tam], new[j];
	
	printf("Complete os [%d] do vetor\n",tam);
	
	for(i = 1; i <= tam; i++)
	{
		scanf("%d",&v[i]);
	}

	for(i = 1; i <= tam; i++)
	{
		for(j = i+1; j <= tam; j++)
		{
			if(v[i] > v[j])
			{
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	printf("Digite o numero que deseja inserir\n");
	scanf("%d",&numb);

	for(i = 1; i <= j; i++)
	{
		if(v[i] > numb)
		{
			int aux = v[i];
			v[i] = numb;
			numb = aux;
		}
	}
	printf("Seu novo vetor é \n");

	for(i = 1; i <= j; i++)
	{
		printf("%d ",v[i]);
	}

	return 0;
}