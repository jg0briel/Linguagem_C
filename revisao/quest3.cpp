/*3)Escreva um algoritmo que leia 3 n�meros e diga qual � o menor entre os tr�s.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	int numero1, numero2, numero3, i, menor;
	
	printf("Digite o primeiro n�mero: ");
  scanf("%d", &numero1);

  printf("Digite o segundo n�mero: ");
  scanf("%d", &numero2);

  printf("Digite o terceiro n�mero: ");
  scanf("%d", &numero3);
	
	menor = numero1;
	
	if (numero2 < menor){
		menor = numero2;
	}
	
	if (numero3 < menor){
		menor = numero3;
	}
	
	printf("O menor n�mero �: %d", menor);
}
