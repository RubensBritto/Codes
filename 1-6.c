#include <stdio.h>

int main ()
{
	int i,n;
	printf("Digite o tamanho do vetor desejado\n");
	scanf("%d",&n);
	int a[n];

	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	// primeira maneira de inverter um vetor
	
	for (i = 0; i < n; i++ )
	{
		printf("%d\n",a[n-i-1]);
	} 

	// segunda maneira de inverter um vetor

	for(i = n - 1; i >= 0; i--)
	{
		printf("%d\n",a[i]);
	}



	return 0;
}