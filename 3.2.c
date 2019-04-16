#include<stdio.h>

int main ()
{
	double numerador = 1, denominador = 1, total = 0;
	int i, k = 0,numb;
	printf("Digite o numero que deseja calcular\n");
	scanf("%d",&numb);
	for(i = 1; i <= numb; i++, k++)
	{
		if (i % 2 == 0)
			total += -(numerador / (denominador + k));
		else 
			total += (numerador / (denominador + k));
	}
	
	printf("%.3lf\n",total);
	return 0;
}