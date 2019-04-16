#include <stdio.h>

int main()
{
	int numb, a = 0, b = 1, i, total;
	scanf("%d",&numb);
	for(i = 0; i < numb; i++)
	{
		total = a + b;
		printf("%d\n",total);
		b = a;
		a = total;
	}

	return 0;
}