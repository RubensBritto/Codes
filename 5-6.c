#include <stdio.h>
#include <math.h>
int main()
{
	int i,n;
	double total = 0,total_geral = 0;;
	printf("Digite a dimensao de R\n");
	scanf("%d",&n);
	int x[n];

	printf("Preencha os [%d] vetores\n",n);

	for(i = 0; i < n; i++)
	{
		scanf("%d",&x[i]);
	}

	for (i =0 ; i < n; i++)
	{
		total += x[i] * x[i];
	}
	
	total_geral = sqrt(total);

	printf("A norma do seu vetor é %lf\n",total_geral);

	return 0;
}