#include <stdio.h>

int main ()
{
	int cand1 = 0, cand2 = 0, branco = 0, voto;

	while(1)
	{
		voto = 0;
		printf("Digite o em que deseja votar ou digite (-1) para encerrar a votação\n");
		scanf("%d", &voto);
		if(voto == 83)
			cand1 += 1;
		else if(voto == 93)
			cand2 += 1;
		else if(voto == -1)
			break;
		else if (voto == 0 || voto != 83 || voto != 93)
			branco += 1;
	}
	
	if (cand1 > cand2)
		printf("O canditado 83-Alibabá venceu com %d votos\n",cand1);
	else
		printf("O canditado 93-Alcapone venceu com %d votos\n",cand2);

		printf("A eleição teve um total de %d votos em branco\n",branco);
	return 0;
}