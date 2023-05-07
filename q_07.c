/*
	ENTRADA: ler inteiro maior ou igual a zero
	PROCESSAMENTO: 
	SA�DA: mostrar en�simo termo da sequ�ncia de Fibonacci (a partir da ordem 0) de acordo com o n�mero digitado pelo usu�rio
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num=0, parcela_1=0, parcela_2=1; //n�mero do usu�rio e parcelas que ser�o somadas (incialmente 0 e 1, conforme a sequ�ncia)
	int termo_sequencia=0;
	int i=0;
	
	system("chcp 1252");
	
	//entrada
	do{
		system("cls");
		printf("TERMO DA SEQU�NCIA DE FIBONACCI (0� ao 46�)\n\n");
		printf("    Termo (�): ");
		scanf("%d", &num);
	}while(num<0 || num > 46);
	
	//c�lculo
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
	
	//sa�da
	system("cls");
	printf("TERMO DA SEQU�NCIA DE FIBONACCI (0� ao 46�)\n\n");
	printf("             O %d� termo da Sequ�ncia de Fibonacci � %d.\n", num, termo_sequencia);
	
	return 0;
}
