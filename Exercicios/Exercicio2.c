/*
Resolução do item dois da lista de exercicio, conforme analise de um ser humano.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float valorInserido, raiz;
	
	printf("INSIRA UM VALOR;\n");
	scanf("%f", &valorInserido);
	
	if (valorInserido>0)
	{
		raiz = sqrt(valorInserido);
		printf("\nA RAIZ QUADRADA DO VALOR INSERIDO E: %f ", raiz);
	}else{
		printf("\nO VALOR INSERIDO %f E NEGATIVO, PORTANDO NAO TEM RAIZ REAL ", valorInserido);
	}
	return 0;
}
