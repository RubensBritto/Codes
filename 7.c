#include <stdio.h>

int main ()
{
	int i,in1,out1,total1,in2,out2,total2,j;

	for (i = 10; i < 100; i++)
	{
		for (j = 10; j < 100; j++)
		{
			in1 = i /10;
			out1 = i % 10;
			total1 = (out1 *10) + in1;

			in2 = j /10;
			out2 = j % 10;
			total2 = (out2 *10) + in2;

			if ((i*j)==(total1 * total2))
			{
				printf("%d x %d = %d x %d == %d\n", i,j,total1,total2,i*j);
			}
		}
	}

	return 0;

}