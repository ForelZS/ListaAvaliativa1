/*
	ENTRADA: ler v�rios n�mero inteiros at� que se digite um n�mero negativo
	PROCESSAMENTO: comparar n�meros com o maior e menor, e fazer a devida atribui��o (se necess�rio)
	SA�DA: mostrar maior e menor n�mero lido
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num=0, maior_num=0, menor_num=0;
	int i=0;
	
	system("chcp 1252");
	
	for(i=1; num>=0; i++){
		system("cls");
		printf("MAIOR E MENOR N�MERO INTEIRO (PARAR QUANDO NEGATIVO)\n\n");
		printf("    N�mero: ");
		scanf("%d", &num);
		
		//compara��o e atribui��o
		if(num > maior_num){
			maior_num = num;
		}else if(num < menor_num){
			menor_num = num;
		}
	}
	
	//sa�da
	printf("\n    Maior = %d", maior_num);
	printf("\n    Menor = %d", menor_num); //menor n�mero lido, ou seja, o n�mero negativo digitado no final
	
	return 0;
}
