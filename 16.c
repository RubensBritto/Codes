#include <stdio.h>

int main ()
{
	int numero, div = 0,div2 = 0,i,j;
	printf("Digite um numero\n");
	scanf("%d", &numero);

	for (i = 1; i < numero; i++)
	{
		if (numero % i == 0)
		{
			div += i;
		}
	}

	for (j = 1; j < div; j++)
	{
		if (div % j == 0)
		{
			div2 += j;
		}
	} 

	if(numero == div2)
	{
		printf("O numero %d é amigo do numero %d\n",numero,div);
	}
	return 0;
}