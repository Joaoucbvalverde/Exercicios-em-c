/*
Resolução do item dois da lista de exercicio, conforme analise de um ser humano.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2;
	printf("INSIRA O PRIMEIRO VALOR:\n");
	scanf("%d", &n1);
	printf("INSIRA O SEGUNDO VALOR:\n");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("O PRIMEIRO VALOR E MAIOR QUE O SEGUNDO");
	}else if(n1 < n2){
		printf("O PRIMEIRO VALOR E MENOR QUE O SEGUNDO");
	}else{
		printf("O PRIMEIRO VALOR E O SEGUNDO SAO IGUAIS");
	}
	return 0;
}
