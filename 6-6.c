#include<stdio.h>

int main()
{
	int number,total = 0,i;
	printf("Digite a dimensão de R desejada\n");
	scanf("%d",&number);
	int x[number], y[number];
	
	printf("Digite os %d valores de X \n", number);
	for(i = 0; i < number; i++)
	{
		scanf("%d",&x[i]);
	}
	
	printf("Digite os %d valores de Y \n",number);
	for(i = 0; i < number; i++)
	{
		scanf("%d",&y[i]);
	}

	for(i = 0; i < number; i++)
	{
		total += x[i]*y[i];
	}

	printf("A norma de R é %d\n", total);
}