/*
	ENTRADA: 2 valores fracionários (x e y) de uma coordenada plana
	PROCESSAMENTO: determinar qual o quadrante da coordenada, ou se está em um dos eixos x e y ou se está na origem
	SAÍDA: mostrar qual o quadrante da coordenada; se estiver na origem, mostrar "Origem"; se estiver sobre um dos eixos, mostrar "Eixo X" ou "Eixo Y"
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float x=0.0f, y=0.0f;
	
	system("chcp 1252 && cls");
	printf("ONDE ESTÁ A COORDENADA?\n\n");
	
	//entrada
	printf("    X: ");
	scanf("%f", &x);
	printf("    Y: ");
	scanf("%f", &y);
	
	//comparação e saída
	if(x==0.0f && y==0.0f){
		printf("\n    Origem\n");
	}else if(x==0.0f && y!=0.0f){
		printf("\n    Eixo Y\n");
	}else if(x!=0.0f && y==0.0f){
		printf("\n    Eixo X\n");
	}else{
		if(x>0.0f && y>0.0f){
			printf("\n    1º Quadrante");
		}else if(x<0.0f && y>0.0f){
			printf("\n    2º Quadrante");
		}else if(x<0.0f && y<0.0f){
			printf("\n    3º Quadrante");
		}else{
			printf("\n    4º Quadrante");
		}						
	}
	
	return 0;
}
