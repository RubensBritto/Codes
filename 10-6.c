#include <stdio.h>

int main()
{
	int i,tam,numb,posit,k = 1;
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
	printf("Digite a posição que deseja inserir ele\n");
	scanf("%d",&posit);

	for(i = 1; i <= j+1; i++)
	{
		if(i == posit)
		{
			new[k] = numb;
			k = k + 1;
			new[k] = v[i];
			k++;
		}
		else
		{
			new[k] = v[i];
			k++;
		}
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
	
	for(i = 1; i <= j; i++)
	{
		printf("%d ",new[i]);
	}
 
	return 0;
}