/*
	ENTRADA: ler vários número inteiros até que se digite um número negativo
	PROCESSAMENTO: comparar números com o maior e menor, e fazer a devida atribuição (se necessário)
	SAÍDA: mostrar maior e menor número lido
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num=0, maior_num=0, menor_num=0;
	int i=0;
	
	system("chcp 1252");
	
	for(i=1; num>=0; i++){
		system("cls");
		printf("MAIOR E MENOR NÚMERO INTEIRO (PARAR QUANDO NEGATIVO)\n\n");
		printf("    Número: ");
		scanf("%d", &num);
		
		//comparação e atribuição
		if(num > maior_num){
			maior_num = num;
		}else if(num < menor_num){
			menor_num = num;
		}
	}
	
	//saída
	printf("\n    Maior = %d", maior_num);
	printf("\n    Menor = %d", menor_num); //menor número lido, ou seja, o número negativo digitado no final
	
	return 0;
}
