#include <stdio.h>

void perfeito(int num, int i, int divi, int total)
{
	if (total > 100)
	{
		return;
	}
	else
	{
		if (i > num)
		{
			if (num*2 == divi)
			{
				printf("%d\n", divi);
				perfeito(num+1,1,0,total+1);
			}
			else
			{
				perfeito(num+1,1,0,total);
				return;
			}
		}
		else
		{
			if (num % i == 0)
			{
				divi += i;
			}
			perfeito(num,i+1,divi,total);
		}
	}
	
}


int main ()
{
	int num;
	//scanf("%d",&num);
	perfeito(1,1,0,0);
	return 0;
}