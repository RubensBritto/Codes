#include <stdio.h>

int main()
{
	int number1,number2,t,i,j,k;
	printf("Digite o tamanho que os dois vetores iram ter\n");
	scanf("%d",&number1);
	number2 = number1;
	t = number2 + number1;
	int ver1[number1], new_ver[t], ver2[number2];
	printf("Digite o valor dos %d do primeiro vetor\n",number1);
	for(i = 0; i < number1; i++)
	{
		scanf("%d",&ver1[i]);
	}
	printf("Digite o valor dos %d do segundo vetor\n",number2);
	for(i = 0; i < number2; i++)
	{
		scanf("%d",&ver2[i]);
	}
	j = 0;
	k = 0;
	for(i = 0; i < t; i++)
	{
		if(i % 2 == 0)
		{
			new_ver[i] = ver1[j];
			j++;
		}
		else
		{
			new_ver[i] = ver2[k];
			k++;
		}
	}
	printf("Seu novo vetor é\n");
	for(i = 0; i< t; i++)
	{
		printf("%d ",new_ver[i]);
	}
	return 0;
}