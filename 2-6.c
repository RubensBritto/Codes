#include<stdio.h>

int main()
{
	int i,n,total = 0;
	printf("Digite o tamanho do Vetor desejado\n");
	scanf("%d",&n);
	int a[n], b[n];

	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	for(i = 0; i < n; i++)
	{
		if (a[i] != a[n-i-1])
		{
			total +=1;
		}
	}

	if (total != 0)
	{
		printf("Is not Palidromo\n");
	}
	else
	{
		printf("Is Palidromo\n");
	}

	return 0;
}