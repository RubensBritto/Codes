#include <stdio.h>

int main ()
{
	int n,i;
	double total;
	printf("Digite a dimensão de R\n");
	scanf("%d", &n);
	int x[n], y[n];
	printf("Complete os [%d] vetores de R\n",n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d",&x[i], &y[i]);
		total += x[i] * y[i];
	}

	printf("%lf\n",total);
	return 0;
}
