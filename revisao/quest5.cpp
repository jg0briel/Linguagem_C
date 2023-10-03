/*5) Leia dois valores, e exiba sua soma. Em seguida pergunte ao usuário: “Novo Cálculo
(S/N)?”. Deve-se ler a resposta e se a resposta for ‘S’ (sim), deve-se repetir todos os
comandos (instruções) novamente, mas se for qualquer outra resposta, o algoritmo deve
ser finalizado escrevendo a mensagem “Fim dos Cálculos”. Escolha a opção mais
adequada de comando de loop para resolver este problema.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	int numero1, numero2, soma;
	char resposta;
	
	do{
		printf("Digite um número:");
		scanf("%d", &numero1);
		
		printf("Digite outro número:");
		scanf("%d", &numero2);
		
		soma = numero1 + numero2;
		
		fflush(stdin);
		
		printf("Soma = %d\n", soma);
		
		printf("Você deseja continuar os calculos (S\N)?");
		scanf("%c", &resposta);
		
	} while (resposta == 'S' || resposta == 's');
	
	printf("Fim dos Cálculos!");
}
