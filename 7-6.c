#include <stdio.h>
int main()
{
	int i,k,n;
	printf("Digite o tamanho desejado do vetor\n");
	scanf("%d", &n);
	int v[n];
	printf("Complete os [%d] espaços vazios do vetor\n",n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&v[i]);
	}

	for(i = 0; i < n; i++)
	{
		for(k = i + 1; k < n; k++)
		{
			if(v[i] == v[k])
			{
				v[k] = -1;
			}
		}
	}
	printf("\n");

	printf("Seu novo vetor é\n");
	for(i = 0; i < n; i++)
	{
		if(v[i] != -1)
		{	
			printf("%d ",v[i]);
		}
		
	}

	return 0;
}