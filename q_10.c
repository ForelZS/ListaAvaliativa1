/*
	ENTRADA: ler 10 n�meros inteiros
	PROCESSAMENTO: calcular m�dia [aritm�tica] entre eles
	SA�DA: mostrar m�dia
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
		printf("M�DIA DE INTEIROS\n\n");
		printf("%d� n�mero: ", i+1);
		scanf("%d", &num);
		
		soma_nums+=num;
	}
	
	media = (double)soma_nums/10;
	
	printf("\n    M�dia = %.2lf\n", media);
	
	return 0;
}
