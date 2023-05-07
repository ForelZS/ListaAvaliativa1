/*
	ENTRADA: selecionar fruta e inserir quantidade de frutas
	PROCESSAMENTO: somar valor de tudo
	SAÍDA: total da compra
*/	
#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao=0;
	int quant_abacaxi=0, quant_maca=0, quant_pera=0;
	int quant_total_abacaxi=0, quant_total_maca=0, quant_total_pera=0;
	int preco_abacaxi=5, preco_maca=1, preco_pera=4;
	int total_compra=0;
	char confirmar;
	
	system("chcp 1252");

	//selecionar fruta
	do{
		system("cls");
		printf("COMPRA DE FRUTAS (1, 2 ou 3)\n\n");
	
		printf("                                   TOTAL = R$ %d,00\n\n", total_compra);
		printf("   1   ABACAXI => R$ 5,00 a unidade\n");
		printf("   2      MAÇÃ => R$ 1,00 a unidade\n");
		printf("   3      PÊRA => R$ 4,00 a unidade\n\n");
		printf("   0 finalizar         \n\n");
		printf("Selecione uma opção: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				//quantas frutas?
				do{
					system("cls");
					printf("COMPRA DE FRUTAS (1, 2 ou 3)\n\n");
					printf("\n\n");
					printf("   1   ABACAXI => R$ 5,00 a unidade\n");
					printf("\n");
					printf("\n\n");
					printf("   Quantos ABACAXIS? ");
					scanf("%d", &quant_abacaxi);
				}while(quant_abacaxi<1);
				
				total_compra += preco_abacaxi*quant_abacaxi;
				quant_total_abacaxi+=quant_abacaxi;				
				break;
				
			case 2:
				do{
					system("cls");
					printf("COMPRA DE FRUTAS (1, 2 ou 3)\n\n");
					printf("\n\n");
					printf("\n");
					printf("   2      MAÇÃ => R$ 1,00 a unidade\n");
					printf("\n\n");
					printf("      Quantas MAÇÃS? ");
					scanf("%d", &quant_maca);
				}while(quant_maca<1);
				
				total_compra += preco_maca*quant_maca;
				quant_total_maca+=quant_maca;
				break;

			case 3:
				do{
					system("cls");
					printf("COMPRA DE FRUTAS (1, 2 ou 3)\n\n");
					printf("\n\n");
					printf("\n");
					printf("\n");
					printf("   3      PÊRA => R$ 4,00 a unidade\n\n");
					printf("      Quantas PÊRAS? ");
					scanf("%d", &quant_pera);
				}while(quant_pera<1);
				
				total_compra += preco_pera*quant_pera;
				quant_total_pera+=quant_pera;
				break;
		}//end switch
		
	}while(opcao!=0);//while(opcao != 1 && opcao != 2 && opcao != 3);
	
	//TOTAL
	do{
	    confirmar='0';
		system("cls");
		printf("COMPRA DE FRUTAS (1, 2 ou 3)\n\n");
		printf("\n\n");
		printf("       ABACAXI\t%d un\t  \t R$ %d,00\n", quant_total_abacaxi, preco_abacaxi*quant_total_abacaxi);
		printf("          MAÇÃ\t%d un\t  \t R$ %d,00\n", quant_total_maca, preco_maca*quant_total_maca);
		printf("          PÊRA\t%d un\t  \t R$ %d,00\n", quant_total_pera, preco_pera*quant_total_pera);
		printf("              \tTOTAL\t =\t R$ %d,00\n\n", total_compra);
		printf("                        COMPRAR? (S/N) ");
		scanf(" %c", &confirmar);
	}while(confirmar!='S' && confirmar!='s' && confirmar!='N' && confirmar!='n');
	
	system("cls");
	printf("COMPRA DE FRUTAS (1, 2 ou 3)\n\n");
	printf("\n\n");
	
	(confirmar=='S' || confirmar=='s') ? printf("    Obrigado por comprar com o Efraim!\n\n") : printf("    Volte quando quiser.\n\n");
	
	getch();
	
	return 0;
}

