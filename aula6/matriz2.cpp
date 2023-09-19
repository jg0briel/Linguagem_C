#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0, "Portuguese");
	
	int matriz[3][3], linha, coluna;
	
	for(linha=0; linha<3; linha++){
		printf("Digite três números para a %dª linha:", linha + 1);
		for(coluna=0; coluna<2; coluna++){
		scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<2; coluna++){
		printf("%d - ", matriz[linha][coluna]);
		}
		printf("%d\n", &matriz[linha][coluna]);
	}
}
