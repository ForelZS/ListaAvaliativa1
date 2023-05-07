/*
	ENTRADA: 4 inteiros A, B, C e D
	SAÍDA: mostrar a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D)
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=0, b=0, c=0, d=0, diferenca=0;
	
	printf("DIFERENCA DE PRODUTOS (A * B - C * D)\n\n");
	
	printf("    A: ");
	scanf("%d", &a);
	printf("    B: ");
	scanf("%d", &b);
	printf("    C: ");
	scanf("%d", &c);
	printf("    D: ");
	scanf("%d", &d);
	
	//cálculo
	diferenca = a * b - c * d;
	
	system("cls");
	printf("DIFERENCA DE PRODUTOS (A * B - C * D)\n\n");
	printf("    DIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d);
	printf("    DIFERENCA = (%d)\n", diferenca);
	
	return 0;
}
