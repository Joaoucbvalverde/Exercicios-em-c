/*
Resolução do item 3 da lista de exercicio, conforme analise de um ser humano.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1;
	
	printf("DIGITE O PRIMEIRO VALOR:\n");
	scanf("%d", &n1);
	
	
	if(n1 % 2 ==0)
	{
		printf("O VALOR INSERIDO E PAR");
	}else{
		printf("O VALOR INSERIDO E IMPAR");
	}
	return 0;
}
