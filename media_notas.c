#include <stdio.h>
#include <locale.h>
// MEDIA DE NOTAS 

main ()
{
	setlocale (LC_ALL, "Portuguese");
	char NOME[40];
	float ETAPA1, ETAPA2, ETAPA3, MEDIA;
	
	printf("\nDigite seu nome: ");
	scanf("%s", NOME);
	printf("\nDigite a nota da etapa 1: ");
	scanf("%f", &ETAPA1);
	printf("\nDigite a nota da etapa 2: ");
	scanf("%f", &ETAPA2);
	printf("\nDigite a nota da etapa 3: ");
	scanf("%f", &ETAPA3);
	
	MEDIA = ((ETAPA1 + ETAPA2 + ETAPA3)/3);
	
	printf("\nO(A) aluno(a) %s obteve a média: %f.", NOME, MEDIA);
}
