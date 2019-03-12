#include <stdio.h>
#include<math.h>

int main()
{
	int numb;
	double j;
	printf("Digite o numero que deseja calcular\n");
	scanf("%d",&numb);
	j = pow(numb,3)+ (2*numb) - 1;
	printf("P(%d) =%d³+ %d X 2 - 1 = %.0lf \n",numb,numb,numb,j);
	return 0;
}