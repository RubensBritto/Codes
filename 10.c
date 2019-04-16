#include <stdio.h>

int main ()
{
	int num,i,test = 360,coef = 0,resto,primo;
	//printf("Digite um numero\n");
	//scanf("%d", &num);

	for(num = 2; num <= 200; num++)
	{
		primo = 0;

		for(i = 1; i <= num; i++)
		{
			if(num % i == 0)
			{
				primo ++;
			}
		}
		if (primo == 2)
		{
			coef = 0;
			resto = 0;

			{
				while((resto == 0) && (test != 1))
				{
					resto = test % num;

					if(resto == 0)
					{
						coef +=1;
						test = test/num;
					}
				}
				printf("O primo %d tem coeficiente %d\n",num,coef);
			}
			if (test == 1)
			{
				break;
			}	
		}
	}

	return 0;
}