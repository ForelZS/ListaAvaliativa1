/*
	ENTRADA: raio da esfera
	PROCESSAMENTO: calcular área e volume da esfera
	SAÍDA: mostrar área e volume da esfera
*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(){
	float raio=0.0f, area=0.0f, volume=0.0f;
	
	system("chcp 1252 && cls");
	printf("ÁREA E VOLUME DA ESFERA\n\n");
	
	//entrada
	printf("    Raio: ");
	scanf("%f", &raio);
	
	//cálculo
	area=4*PI*(raio*raio);
	volume=(4.0f/3.0f)*PI*(raio*raio*raio);
	
	//saída
	printf("\n    Área: %.2f", area);
	printf("\n  Volume: %.2f", volume);
	printf("\n");
	
	return 0;
}
