/*6) Pergunte ao usuário qual o tamanho do quadrado que ele quer que seja desenhado; Por
exemplo, se ele informar 5 por 5, o desenho ficará assim:
X X X X X
X X X X X
X X X X X
X X X X X
X X X X X*/

# include <stdio.h>
#include <locale.h>

int main(){
	
	int linha, coluna, tamanho;
	
	printf("Digite o tamanho do quadrado:");
	scanf("%d", &tamanho);
	
	for (linha = 0; linha < tamanho; linha++){
		for(coluna = 0; coluna < tamanho; coluna++){
			printf("X ");
		}
		printf("\n");
	}
}
