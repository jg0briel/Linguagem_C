/*7) Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor.
a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.
b) Pergunte ao usu�rio qual n�mero ele quer pesquisar e diga quantas vezes este n�mero est�
presente no vetor.
*/

/*a)
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0,"Portuguese");
	
	int numeros[10], inicio, numero3;
	
	for(inicio=0; inicio<10; inicio++){
		printf("Digite um n�mero:");
		scanf("%d", &numeros[inicio]);
	}
	
	for(inicio=0; inicio<10; inicio++){
		if(numeros[inicio] == 3)
			numero3++;
	}
	
	printf("O n�mero 3 apareceu %d vezes no vetor.", numero3 - 1);
}*/

//b)
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0,"Portuguese");
	
	int numeros[10], inicio, numero, contador;
	
	for(inicio=0; inicio<10; inicio++){
		printf("Digite um n�mero:");
		scanf("%d", &numeros[inicio]);
	}
	
	printf("Qual o n�mero que voc� quer saber se apareceu no vetor");
	scanf("%d", &numero);
	
	for(inicio=0; inicio<10;inicio++){
		if(numeros[inicio] == numero){
			contador++;
		}
	}
	
	printf("O n�mero %d foi encontrado %d", numero, contador - 1);
}
