
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char nome [30];
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;

	printf("nome \n" );
	
	scanf("%s", &curso);
	printf("\n Curso: %s", nome);
	
	printf("Insira nota1:  \n");
	scanf("%f", &nota1);
	
	printf("Insira nota2: \n ");
	scanf("%f", &nota2);
	
	printf("Insira nota3:  \n");
	scanf("%f", &nota3);
	
	printf("Insira nota4:  \n");
	scanf("%f", &nota4);
	
	
		
	media = (nota1 + nota2 + nota3 + nota4) /2;
	
	printf ("media = %f", media);
	
	
	return 0;
}
