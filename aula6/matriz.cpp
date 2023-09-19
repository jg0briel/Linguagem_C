#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0, "Portuguese");
	
	int matriz[3][3], linha, coluna;
	
	matriz[0][0] = 300;
	matriz[0][1] = 5;
	matriz[0][2] = 3;
	
	matriz[1][0] = 4;
	matriz[1][1] = 10;
	matriz[1][2] = 337;
	
	matriz[2][0] = 12;
	matriz[2][1] = 2;
	matriz[2][2] = 5;
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<2; coluna++){
		printf("%d - ", matriz[linha][coluna]);
		}
		printf("%d\n", matriz[linha][coluna]);
	}
	
}
