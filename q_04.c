/*
	ENTRADA: 2 valores fracion�rios (x e y) de uma coordenada plana
	PROCESSAMENTO: determinar qual o quadrante da coordenada, ou se est� em um dos eixos x e y ou se est� na origem
	SA�DA: mostrar qual o quadrante da coordenada; se estiver na origem, mostrar "Origem"; se estiver sobre um dos eixos, mostrar "Eixo X" ou "Eixo Y"
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float x=0.0f, y=0.0f;
	
	system("chcp 1252 && cls");
	printf("ONDE EST� A COORDENADA?\n\n");
	
	//entrada
	printf("    X: ");
	scanf("%f", &x);
	printf("    Y: ");
	scanf("%f", &y);
	
	//compara��o e sa�da
	if(x==0.0f && y==0.0f){
		printf("\n    Origem\n");
	}else if(x==0.0f && y!=0.0f){
		printf("\n    Eixo Y\n");
	}else if(x!=0.0f && y==0.0f){
		printf("\n    Eixo X\n");
	}else{
		if(x>0.0f && y>0.0f){
			printf("\n    1� Quadrante");
		}else if(x<0.0f && y>0.0f){
			printf("\n    2� Quadrante");
		}else if(x<0.0f && y<0.0f){
			printf("\n    3� Quadrante");
		}else{
			printf("\n    4� Quadrante");
		}						
	}
	
	return 0;
}
