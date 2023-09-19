#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0, "Portuguese");
	
	char nome[100], letra;
	int i, tamanho;
	float nota;
	
	printf("Digite seu nome:");
	
	printf("Digite sua nota:");
	
	i=0;
	letra = getchar();
	while(letra != '\n'){
		nome[i] = letra;
		i++;
		letra = getchar();
	}
}
