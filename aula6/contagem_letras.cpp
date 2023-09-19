#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(0, "Portuguese");
	
	char nome[120];
	int i, tamanho, letraA, letraB, letraC;
	
	letraA = letraB = letraC = 0;
	
	printf("Digite seu nome completo:");
	scanf("%[ -~]", nome);
	
	tamanho = strlen(nome);
	printf("%d", tamanho);
	
	for(i = 0; i<tamanho; i++){
		if (nome[i] == 'a')
			letraA++;
		else if (nome[i] == 'b')
			letraB++;
		else if (nome[i] == 'c')
			letraC++;
	}
	
	printf("A quantidade de as é %d, de b é %d e a de c é %d", letraA, letraB, letraC);
}
