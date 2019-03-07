#include <stdio.h>

int main()
{
	int i,t,numb,posit,k = 1;
	printf("Digite o tamanho do vetor desejado \n");
	scanf("%d",&t);
	int j = t+1;
	int v[t], new[j];
	
	printf("Complete os [%d] do vetor\n",t);
	
	for(i = 1; i <= t; i++)
	{
		scanf("%d",&v[i]);
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
	for(i = 1; i <= j; i++)
	{
		printf("%d ",new[i]);
	}
 
	return 0;
}