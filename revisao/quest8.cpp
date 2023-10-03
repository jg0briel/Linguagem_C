/*8) Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê-la. Após
preenchida,
a) Informe qual foi o maior número encontrado na matriz.
b) Informe qual foi o menor número encontrado na matriz*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0, "Portuguese");
	
	int matriz[3][4], linha, coluna;
	int maior_numero, menor_numero;
	
	for(linha=0; linha < 3; linha++){
		printf("Digite quatro números para a %dª linha:", linha + 1);
		for(coluna=0; coluna < 4; coluna++){
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	for(linha=0; linha < 3; linha++){
		for(coluna=0; coluna < 4; coluna++){
			printf("%d - ", matriz[linha][coluna]);
		}
		printf("%d\n", matriz[linha][coluna]);
	}
	
	maior_numero = matriz[0][0];
    menor_numero = matriz[0][0];
    
    for(linha=0; linha < 3; linha++){
		for(coluna=0; coluna < 4; coluna++){
			if(matriz[linha][coluna] > maior_numero){
			maior_numero = matriz[linha][coluna];
			}
			
			if(matriz[linha][coluna] < menor_numero){
			menor_numero = matriz[linha][coluna];
			}
		}
	}
	
	printf("O maior valor encontrado na matriz é: %d\n", maior_numero);
	printf("O menor valor encontrado na matriz é: %d\n", menor_numero);
}
