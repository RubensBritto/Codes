#include<stdio.h>

int main()
{
	int i;
	double ab1[2],ab2[2],result1 = 0,result2 = 0,result_f = 0,reav,final;
	printf("Digite as duas notas para formar a AB1\n");
	for(i = 0; i < 2; i++)
	{
		scanf("%lf",&ab1[i]);
		result1 += ab1[i]; 
	}
	printf("Digite as duas notas para formar a AB2\n");
	for(i = 0; i < 2; i++)
	{
		scanf("%lf",&ab2[i]);
		result2 += ab2[i];
	}
	result_f = (result1+result2)/4;
	printf("A sua media final é de %.2lf\n",result_f);
	if(result_f < 5)
	{
		printf("Voce está reprovado sem direito a reavaliação e final\n");
		return 0;
	}

	if(result_f < 7)
	{
		printf("Você precisa de reavaliação ");
		if(result1 == result2)
		{
			printf("da AB1 ou da AB2\n");
			
			printf("Digite a nota da reavaliação\n");
			scanf("%lf",&reav);
			if(reav + (result1/2) >= 14)
			{
				printf("Voce esta aprovado, com media final de %.2lf\n",(reav+result1)/2);
				return 0;
			}
			else
			{
				if((reav + (result1/2)) >=10)
				{
					printf("Voce vai para a final\n");
					printf("Digite a nota da prova final\n");
					scanf("%lf",&final);
					if(final >= 5.5)
					{
						printf("Voce esta aprovado com media %.2lf\n",final);
						return 0;
					}
					else
					{
						printf("Você foi reprovado\n");
						return 0;
					}		
				}
				else
				{
					printf("Voce esta reprovado sem direito final\n");
					return 0;
				}
			}
		}
		if(result1 > result2)
		{
			printf("da AB2\n");

			printf("Digite a nota da reavaliação\n");
			scanf("%lf",&reav);
			if(reav + (result2/2) >= 14)
			{
				printf("Voce esta aprovado, com media final de %.2lf\n",(reav+result2)/2);
				return 0;
			}
			else
			{
				if(reav + (result2/2) >=10)
				{
					printf("Voce vai para a final\n");
					printf("Digite a nota da prova final\n");
					scanf("%lf",&final);
					if(final >= 5.5)
					{
						printf("Voce esta aprovado com media %.2lf\n",final);
						return 0;
					}
					else
					{
						printf("Você foi reprovado\n");
						return 0;
					}		
				}
				else
				{
					printf("Voce esta reprovado sem direito final\n");
					return 0;
				}
			}
		}
		else
		{
			printf("da AB1\n");

			printf("Digite a nota da reavaliação\n");
			scanf("%lf",&reav);
			if(reav + (result1/2) >= 14)
			{
				printf("Voce esta aprovado, com media final de %.2lf\n",(reav+result1)/2);
				return 0;
			}
			else
			{
				if(reav + (result1/2) >=10)
				{
					printf("Voce vai para a final\n");
					printf("Digite a nota da prova final\n");
					scanf("%lf",&final);
					if(final >= 5.5)
					{
						printf("Voce esta aprovado com media %.2lf\n",final);
						return 0;
					}
					else
					{
						printf("Você foi reprovado\n");
						return 0;
					}		
				}
				else
				{
					printf("Voce esta reprovado sem direito final\n");
					return 0;
				}
			}
		}
		
	}
	else
		printf("Parabens voce esta aprovado com media %.2lf\n",result_f);
	return 0;
	
}