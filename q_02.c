/*
	ENTRADA: ler quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2)
	PROCESSAMENTO: calcular distância entre eles
	SAÍDA: mostrar distância com 4 casas decimais após a vírgula
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float p1_x, p1_y, p2_x, p2_y, distancia;
	
	printf("PLANO CARTESIANO: DISTANCIA ENTRE 2 PONTOS\n\n");
	
	//entrada
	printf("    1o ponto\n\n");
	printf("        X: ");
	scanf("%f", &p1_x);
	printf("        Y: ");
	scanf("%f", &p1_y);
	
	printf("\n");
	printf("    2o ponto\n\n");
	printf("        X: ");
	scanf("%f", &p2_x);
	printf("        Y: ");
	scanf("%f", &p2_y);
	
	//cálculo
	distancia = sqrt(pow(p2_x-p1_x,2) + pow(p2_y-p1_y, 2));
	
	//saída
	printf("\n");
	printf("    Distancia = %.4f", distancia);
	
	return 0;
}
