#include <stdio.h>

int main()
{
	int i,n,j;
	printf("Digite o tamanho do vetor desejado\n");
	scanf("%d",&n);
	int a[n],b[n],c[n+n];

	printf("Digite os %d valores do primeiro vetor\n",n);

	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Digite os %d valores do segundo vetor\n",n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&b[i]);
	}
	for(i = 0; i < n+n; i+= 2,j++)
	{
		c[i]   = a[j];
		c[i+1] = b[j]; 
	}
	for(i = 0; i < n+n; i++)
	{	
		if (i == (n+n)-1){
			printf("%d ",c[i]);
		}
		else{
			printf("%d,",c[i]);
		}
	}
	return 0;
}

