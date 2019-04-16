#include <stdio.h>

int main ()
{
	int num,i = 0;
	printf("Digite um numero\n");
	scanf("%d",&num);
	
	while(num != 0)
	{
		num = num / 10;
		i += 1;
	}

	printf("%d\n",i);

	return 0;
}