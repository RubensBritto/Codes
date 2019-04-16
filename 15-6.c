#include <stdio.h>
#include <math.h>
#include<stdio.h>

int main()
{
	int grau,i,x,constante,resultado=0;
	printf("Digite o grau da equação\n");
	scanf("%d", &grau);
	int equa[grau];

	for(i = grau; i > 0; i--)
	{
		printf("Digite os coeficiente\n");
		scanf("%d", &equa[i]);
	}
	printf("Digite o coeficiente\n");
	scanf("%d", &constante);
	
	printf("Digite o valor de X\n");
	scanf("%d", &x);
	
	for(i = grau ; i > 0; i--)
	{
		resultado += pow(x,i)*equa[i];
	}
	resultado += constante;
	printf("resultado: %d\n", resultado);

	return 0;
}