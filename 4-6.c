#include<stdio.h>


int main ()
{
	int i,n,par = 0, impar = 0,j = 0,numb = 0;
	printf("Digite o tamanho do Vetor Principal\n");
	scanf("%d",&n);
	int a[n];

	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);

		if(a[i] % 2 == 0)
		{
			par +=1;
		}
		else
		{
			impar += 1;
		}
	}

	int b[par], c[impar];
 	
 	n = 0;
 	i = 0;

 	printf("Vetor par {");

	while(n < par)
	{
		if(a[i] % 2 == 0)
		{
			if (n == par -1)
			{				
				printf("%d }\n",a[i]);
				break ;
			}
			else
			{
				printf(" %d ",a[i]);
				n++;
			}
		}

		i++;
	}
	n = 0;
 	i = 0;

 	printf("Vetor impar {");

	while(n < impar)
	{
		if(a[i] % 2 != 0)
		{
			if (n == impar -1)
			{				
				printf("%d } \n",a[i]);
				break ;
			}
			else
			{
				printf(" %d ",a[i]);
				n++;
			}
		}

		i++;
	}

	return 0;
}