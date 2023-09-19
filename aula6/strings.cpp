#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0, "Portuguese");
	
	char nome[120];
	
	printf("Digite seu nome completo:");
	scanf("%[ -~]", nome);
	
	printf("O nome digitado foi: %s", nome);
}
