#include <stdio.h>

int main ()
{
	double k,total,result;
	double i = 1;
	printf("Digite um valor para k\n");
	scanf("%lf",&k);
	while(1)
	{
		total = 1/i;
		result += total;
		//printf("%lf\n",result);
		if (result >= k)
		{
			printf("%.2lf\n",i);
			break;
		}
		i ++;
	}
	return 0;
}