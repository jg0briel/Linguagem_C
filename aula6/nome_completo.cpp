#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	char nome[100], letra;
	int i, tamanho;
	
	printf("Digite seu nome completo:");
	
	i=0;
	letra = getchar();
	while(letra != '\n'){
		nome[i] = letra;
		i++;
		letra = getchar();
	}
	
	tamanho = i;
	printf("O nome completo é: %d");
	
	for(i = 0; i<tamanho; i++)
	printf("%c", nome[i]);
	
	printf("O nome com as letras ao contrário é:");
	for(i=tamanho - 1; i>=0; i--)
		printf("%c", nome[i]);
	
	
	
}
