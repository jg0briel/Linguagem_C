/*3)Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	int numero1, numero2, numero3, i, menor;
	
	printf("Digite o primeiro número: ");
  scanf("%d", &numero1);

  printf("Digite o segundo número: ");
  scanf("%d", &numero2);

  printf("Digite o terceiro número: ");
  scanf("%d", &numero3);
	
	menor = numero1;
	
	if (numero2 < menor){
		menor = numero2;
	}
	
	if (numero3 < menor){
		menor = numero3;
	}
	
	printf("O menor número é: %d", menor);
}
