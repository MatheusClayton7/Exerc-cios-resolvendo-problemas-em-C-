#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char produto [30];
	float mes1;
	float mes2;
	float mes3;
	float mes4;
	float mes5;
	float mes6;
	float mes7;
	float mes8;
	float mes9;
	float mes10;
	float mes11;
	float mes12;
	float media;

	printf("produto \n" );
	
	scanf("%s", &produto);
	printf("\n produto: %s", produto);
	
	printf("Qual foi o valor do produto em Janeiro \n");
	scanf("%f", &mes1);
	
	printf("Qual foi o valor do produto em Fevereiro? \n ");
	scanf("%f", &mes2);
	
	printf("Qual foi o valor do produto em Março?  \n");
	scanf("%f", &mes3);
	
	printf("Qual foi o valor do produto em Abril?  \n");
	scanf("%f", &mes4);

	printf("Qual foi o valor do produto em Maio?  \n");
	scanf("%f", &mes5);
	
	printf("Qual foi o valor do produto em Junho? \n ");
	scanf("%f", &mes6);
	
	printf("Qual foi o valor do produto em Julho? \n");
	scanf("%f", &mes7);
	
	printf("Qual foi o valor do produto em Agosto? \n");
	scanf("%f", &mes8);
	
	printf("Qual foi o valor do produto em Setembro? \n");
	scanf("%f", &mes9);
	
	printf("Qual foi o valor do produto em Outubro? \n ");
	scanf("%f", &mes10);
	
	printf("Qual foi o valor do produto em Novembro? \n");
	scanf("%f", &mes11);
	
	printf("Qual foi o valor do produto em Dezembro?  \n");
	scanf("%f", &mes12);	
	
		
	media = (mes1 + mes2 + mes3 + mes4 + mes5 + mes6 + mes7 + mes8 + mes9 + mes10 + mes11 + mes12) /12;
	
	printf ("media = %f", media);
	
	
	
	
	
	
	
	
	
	return 0;
}
