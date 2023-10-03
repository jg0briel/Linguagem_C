/*2) Ler um número e dizer se ele está contido no intervalo entre 10 e 15, onde 10 e 15 também
pertencem ao intervalo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	int numero;
	
	printf("Digite um número entre 10 e 15:");
	scanf("%d", &numero);
	
	if (numero >= 10 && numero <=15){
		printf("O número digitado está entre 10 e 15");
	}
	else{
		printf("O número digitado não se encontra no intervalo");
	}
}
