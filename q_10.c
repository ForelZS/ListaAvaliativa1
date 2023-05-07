/*
	ENTRADA: ler 10 números inteiros
	PROCESSAMENTO: calcular média [aritmética] entre eles
	SAÍDA: mostrar média
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num=0, soma_nums=0;
	double media=0.0;
	int i=0;
	
	system("chcp 1252");
	
	for(i=0; i<=9; i++){
		system("cls");
		printf("MÉDIA DE INTEIROS\n\n");
		printf("%dº número: ", i+1);
		scanf("%d", &num);
		
		soma_nums+=num;
	}
	
	media = (double)soma_nums/10;
	
	printf("\n    Média = %.2lf\n", media);
	
	return 0;
}
