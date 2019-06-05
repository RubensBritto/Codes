#include<stdio.h>
#include<stdlib.h>
#include <time.h>
typedef struct facima{

	double np1,np2,media;
	char name_mat[50];
}facima;

int main()
{
	int materias,i;
	double pim,media_geral = 0;
	printf("Digite a quantidade de materias: ");
	scanf("%d",&materias);
	printf("Digite a nota do PIM\n");
	scanf("%lf",&pim);
	struct facima nota[materias];
	for(i = 0; i <materias; i++)
	{
		printf("Digite o nome da materia\n");
		scanf(" %[^\n]",nota[i].name_mat);
		printf("Digite a NP1\n");
		scanf("%lf", &nota[i].np1);
		printf("Digite a NP2\n");
		scanf("%lf", &nota[i].np2);
		nota[i].media = (nota[i].np1*0.4) + (nota[i].np2 *0.4) + (pim * 0.2);
		printf("A media da materia %s foi: %.2lf\n",nota[i].name_mat, nota[i].media);
		sleep(5);
		system("clear");
		media_geral+= nota[i].media;
	}
	printf("Sua media final foi: %.2lf\n", media_geral/materias);
}
