#include<stdio.h>

int main ()
{
	int num, resto,quociente,i,j = 0,v[j];
	scanf("%d",&num);
	
	while(quociente != 0)
	{
		quociente = num / 2;
		resto = num % 2;

		num = quociente;
		v[j] = resto;
		j++;
	//printf("%d\n",resto);
	}
	for(i = j; i >= ; i--)
	{
		printf("%d\n",v[i]); //falta so o print.
	}
	return 0;
}
