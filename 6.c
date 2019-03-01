#include <stdio.h>

int main ()
{
	int i, in, out,total = 0 ;
	for(i = 1000; i < 10000; i++)
	{
		in = i/100;
		out = i % 100;
		total = in + out;

		if (total*total == i)
		{
			printf("%d\n",i);
		}

	}
	return 0;
}