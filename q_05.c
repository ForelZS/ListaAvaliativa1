/*
	ENTRADA: n�mero [inteiro] positivo
	PROCESSAMENTO: descobrir seus divisores
	SA�DA: mostrar seus divisores
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> //para verifinar se n�mero � fracion�rio ---> modf()


int main(){
	double num=0.0, num_frac=0.0;
	int i=0;
	
	system("chcp 1252");
	
	//entrada e verifica��o de que se o n�mero � v�lido
	do{
		system("cls");
		printf("DIVISORES DE INTEIRO POSITIVO\n\n");
		printf("    N�mero: ");
		scanf("%lf", &num);
		
		num_frac=modf(num,NULL);
	}while(num>=1 && num_frac!=0.0);
	
	//c�lculo e sa�da
	printf("\n Divisores: {");
	for(i=1; i<=num;i++){
		if((int)num%i==0){
			i!=num ? printf("%d, ", i) : printf("%d", i);
		}
	}
	printf("}");
	
	return 0;
}
