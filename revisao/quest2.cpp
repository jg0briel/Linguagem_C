/*2) Ler um n�mero e dizer se ele est� contido no intervalo entre 10 e 15, onde 10 e 15 tamb�m
pertencem ao intervalo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	int numero;
	
	printf("Digite um n�mero entre 10 e 15:");
	scanf("%d", &numero);
	
	if (numero >= 10 && numero <=15){
		printf("O n�mero digitado est� entre 10 e 15");
	}
	else{
		printf("O n�mero digitado n�o se encontra no intervalo");
	}
}
