#include <stdio.h>

int main()
{
	double denominador = 2, numerador = 1, soma = 0;
	int i,num, j = 0, k = 0;
	printf("Digite o numero que dejesa calcular\n");
	scanf("%d", &num);
	for(i = 1; i <= num; i++, j += 2, k += 3)
	{
		soma += (numerador + j) / (denominador + k);
		printf("%lf\n",soma );
	}

	printf("%.3lf\n",soma );
	
	return 0;
}