/*7) Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor.
a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
b) Pergunte ao usuário qual número ele quer pesquisar e diga quantas vezes este número está
presente no vetor.
*/

/*a)
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0,"Portuguese");
	
	int numeros[10], inicio, numero3;
	
	for(inicio=0; inicio<10; inicio++){
		printf("Digite um número:");
		scanf("%d", &numeros[inicio]);
	}
	
	for(inicio=0; inicio<10; inicio++){
		if(numeros[inicio] == 3)
			numero3++;
	}
	
	printf("O número 3 apareceu %d vezes no vetor.", numero3 - 1);
}*/

//b)
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0,"Portuguese");
	
	int numeros[10], inicio, numero, contador;
	
	for(inicio=0; inicio<10; inicio++){
		printf("Digite um número:");
		scanf("%d", &numeros[inicio]);
	}
	
	printf("Qual o número que você quer saber se apareceu no vetor");
	scanf("%d", &numero);
	
	for(inicio=0; inicio<10;inicio++){
		if(numeros[inicio] == numero){
			contador++;
		}
	}
	
	printf("O número %d foi encontrado %d", numero, contador - 1);
}
