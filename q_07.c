/*
	ENTRADA: ler inteiro maior ou igual a zero
	PROCESSAMENTO: 
	SAÍDA: mostrar enésimo termo da sequência de Fibonacci (a partir da ordem 0) de acordo com o número digitado pelo usuário
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num=0, parcela_1=0, parcela_2=1; //número do usuário e parcelas que serão somadas (incialmente 0 e 1, conforme a sequência)
	int termo_sequencia=0;
	int i=0;
	
	system("chcp 1252");
	
	//entrada
	do{
		system("cls");
		printf("TERMO DA SEQUÊNCIA DE FIBONACCI (0º ao 46º)\n\n");
		printf("    Termo (º): ");
		scanf("%d", &num);
	}while(num<0 || num > 46);
	
	//cálculo
	if(num==0){
		termo_sequencia=parcela_1;
	}else if(num==1){
		termo_sequencia=parcela_2;
	}else{
		for(i=1; i<num; i++){
			termo_sequencia=parcela_1 + parcela_2;
			parcela_1=parcela_2;
			parcela_2=termo_sequencia;
		}
	}
	
	//saída
	system("cls");
	printf("TERMO DA SEQUÊNCIA DE FIBONACCI (0º ao 46º)\n\n");
	printf("             O %dº termo da Sequência de Fibonacci é %d.\n", num, termo_sequencia);
	
	return 0;
}
