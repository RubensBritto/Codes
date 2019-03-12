#include <stdio.h>

int main ()
{
	int num, resto,quociente,i,j = 0,v[j];
	scanf("%d",&num);
	
	while(quociente != 1)
	{
		quociente = num / 2;
		resto = num % 2;

		num = quociente;
		v[j] = resto;
		j++;
	//printf("%d\n",resto);
	}
	for(i = j; i >=0 ; i--)
	{
		printf("%d\n",v[i]);
	}
	return 0;
}
