/*
	ENTRADA: NULL
	PROCESSAMENTO: somar todos os números naturais abaixo de 1000 que são múltiplos de 3 e 5
	SAÍDA: mostrar esta soma
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int soma=0, i=0;
	
	system("chcp 1252 && cls");
	printf("SOMA DOS NATURAIS ABAIXO DE 1000 (MÚLTIPLOS DE 3 OU 5)\n\n");
	
	//cálculo
	for(i=1000; i>0; i--){
		if(i%3==0 || i%5==0){
			soma+=i;
		}
	}
	
	//saída
	printf("    Soma = %d", soma);
	
	return 0;
}
